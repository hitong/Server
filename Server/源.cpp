#include <iostream>
#include <string>
#include <winsock2.h>  
#include <WS2tcpip.h>
#include <vector>
#include "Server.h"

using namespace std;

int main() {
	fd_set fd_read,fd_write,fd_excp;
	timeval t_val{10,0};
	Header header;
	Server server;
	server.initSock();
	int count = 0;
	while (true) {
		FD_ZERO(&fd_read);
		FD_ZERO(&fd_write);
		FD_ZERO(&fd_excp);
		for (auto sock:server._socks) {
			FD_SET(sock,&fd_read);
		}
		int ret = select(server._sock, &fd_read, &fd_write, &fd_excp,&t_val);
		if (ret < 0) {
			cout << "select err out" << endl;
			break;
		} 
		for (auto it = server._socks.begin(); it != server._socks.end(); it++) {
			if (FD_ISSET(*it,&fd_read)) {
				auto message = server.recvMessage(*it);
				if (message) {
					Message* m = (Message*)malloc(sizeof(Message)+1024);
					m->_size = 1024;
					m->_cmd = MESSAGE;
					server.sendMessage(m,*it);
					delete message;
				}
			}
		}
		if (count++ % 1000 == 0) {
			cout <<"cout :" << count << endl;
		}
	}
	server.closeConnect();
	return 0;
}