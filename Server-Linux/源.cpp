#include <iostream>
#include <string>
#include <vector>
//#include <thread>
#include "Server.h"
#include <memory>

using namespace std;

const char* RECV = "recv";
int main() {
	cout << sizeof(Message) << endl;
	fd_set fd_read, fd_write, fd_excp;
	timeval t_val{ 100,0 };
	Header header;
	Server server;
	server.initSock();
	int maxFd = 0;
	int count = 0;
	//thread p = thread([&] {
		while (true) {
			FD_ZERO(&fd_read);
			FD_ZERO(&fd_write);
			FD_ZERO(&fd_excp);
			for (auto sock : server._socks) {
				FD_SET(sock, &fd_read);
			}
			maxFd = max(server._socks[server._socks.size() - 1] + 1, maxFd);
		//	cout << "in select " << endl;
			int ret = select(maxFd, &fd_read, &fd_write, &fd_excp, 0);
		//	cout << " select out" << endl;
			if (ret < 0) {
				cout << "select err out" << endl;
				break;
			}
			for (int i = 0; i < server._socks.size(); i++) {
				if (FD_ISSET(server._socks[i], &fd_read)) {
					FD_CLR(server._socks[i], &fd_read);
					auto message = server.recvMessage(server._socks[i]);
					if (message) {
			//			cout << message->data << endl;
						unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 2048) };
						uq_message->_size = 2048;
						uq_message->_cmd = MESSAGE;
						//memcpy(uq_message->data, RECV, uq_message->_size);
						server.sendMessage(uq_message.get(), server._socks[i]);
						delete message;
					}
				}
			}
			if (count++ % 10 == 0) {
				cout << "cout :" << count << endl;
			}
		}
	//	});
	//p.join();
	server.closeConnect();
	return 0;
}