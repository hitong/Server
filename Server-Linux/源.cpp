#include <iostream>
#include <string>
#include <vector>
//#include <thread>
#include "Server.h"
#include <memory>

using namespace std;

const char* RECV = "recv";
int main() {
	fd_set fd_read, fd_write, fd_excp;
	timeval t_val{ 100,0 };
	Server server;
	server.initSock();
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
					printf("new client connect: %d,  %s\n", server._socks[it->first]._port, 
						server._socks[it->first]._ip);
				}
				if (state == RECV_CLOSE)
				{
					printf("close sock: %d %s\n", server._socks[it->first]._port,
						server._socks[it->first]._ip);
					server._socks.erase(it--);
				}
			}
		}
	}
	//	});
	//p.join();
	server.closeConnect();
	return 0;
}