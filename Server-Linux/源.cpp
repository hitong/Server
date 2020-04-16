#include <iostream>
#include <string>
#include <vector>
//#include <thread>
#include "hiredis/hiredis.h"
#include "Server.h"
#include <memory>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/socket.h>
using namespace std;

#pragma(lib, "libhiredis")
#define EpollTest
const char* RECV = "recv";
int main() {
#ifdef EpollTest
	//epoll_create();


#endif // EpollTest


#ifdef RedisTest
	
	redisContext* context = redisConnect("127.0.0.1",6379);
	redisReply* reply;
	redisAppendCommand(context, "SET foo bar");
	redisAppendCommand(context, "GET foo");
	redisGetReply(context, (void**)&reply); // reply for SET
	cout << reply->str << endl;
	freeReplyObject(reply);
	redisGetReply(context, (void**)&reply); // reply for GET
	cout << reply->str << endl;
	freeReplyObject(reply);
	redisFree(context);
#endif // RedisTest

#ifdef SockServer
	fd_set fd_read, fd_write, fd_excp;
	timeval t_val{ 100,0 };
	Server server;
	cout << server.initSock() << endl;
	int count = 0;
	Header* header;
	int state = -1;
	//thread p = thread([&] {
	while (server.isRun()) {
		FD_ZERO(&fd_read);
		FD_ZERO(&fd_write);
		FD_ZERO(&fd_excp);
		for (auto& sock : server._socks) {
			FD_SET(sock.first, &fd_read);
		}
		int ret = select(server.maxSock, &fd_read, &fd_write, &fd_excp, 0);

		if (ret < 0) {
			cout << "select err out" << endl;
			break;
		}

		for (auto it = server._socks.begin(); it != server._socks.end(); it++)
		{
			if (FD_ISSET(it->first, &fd_read))
			{
				state = server.recvMessage(it->first, header);
				if (state == RECV_OK) {
					//			cout << message->data << endl;
					unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 2048) };
					uq_message->_size = 2048;
					uq_message->_cmd = MESSAGE;
					//memcpy(uq_message->data, RECV, uq_message->_size);
					server.sendMessage(it->first, uq_message.get());
					delete header;
					if (count++ % 10 == 0) {
						cout << "succcesful deal message :" << count << endl;
					}
				}
				if (state == RECV_ACCEPT) {
					printf("new client connect: %ud,  %s\n", server._socks[it->first]._port, 
						server._socks[it->first]._ip);
				}
				if (state == RECV_CLOSE)
				{
					printf("close sock: %d, %s\n", server._socks[it->first]._port,
						server._socks[it->first]._ip);
					server._socks.erase(it--);
				}
			}
		}
	}
	//	});
	//p.join();
	server.closeConnect();
#endif // SockServer

	return 0;
}