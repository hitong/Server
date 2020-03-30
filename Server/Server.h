#pragma once
#include <iostream>
#include <string>
#include <winsock2.h>  
#include <WS2tcpip.h>
#include <set>
#include "Message.h"

#pragma comment(lib,"ws2_32.lib")


extern const char* SERVER_IP;
extern const short SERVER_PORT;
class Server
{
public:
	int _sock = INVALID_SOCKET;
	set<int> _socks;

	Server() = default;

	int initSock() {
		if (isRun()) {
			return -1;
		}
		WORD sockVersion = MAKEWORD(2, 2);
		WSADATA wsaData;
		if (WSAStartup(sockVersion, &wsaData) != 0)
		{
			return 0;
		}
		return connectSock();

	};
	int sendMessage(Header* header,int sock) {
		if (isRun() && sock != INVALID_SOCKET) {
			send(sock, (const char*)header, sizeof(Header) + header->_size, 0);
		}
		return 0;
	}

	Message* recvMessage(int sock) {
		if (sock == _sock) {
			sockaddr_in addr;
			int sock_len = sizeof(sockaddr_in);
			int sock_c = accept(sock, (sockaddr*)&addr, &sock_len);
			if (sock_c == INVALID_SOCKET) {
				cout << "client connect error" << endl;
			}
			char buf[17]{ 0 };
			inet_ntop(AF_INET, &addr.sin_addr, buf, sizeof(buf));
			printf("new client connect: %d,  %s\n", ntohs(addr.sin_port), buf);
			_socks.insert(sock_c);
			return nullptr;
		} 
		if (_socks.find(sock) != _socks.end()) {
			Header header;
			int ret1 = recv(sock, (char*)&header, sizeof(header), 0);
			Message* uq_message = (Message*)malloc(sizeof(Message) + header._size);
			int ret2 = recv(sock, (char*)uq_message->data, header._size, 0);
			if (ret1 <= 0 || ret2 <= 0) {
				closesocket(sock);
				_socks.erase(sock);
				cout << "sock " << sock << " closed" << endl;
			}
			else {
				memcpy(uq_message, &header, sizeof(Header));
				return uq_message;
			}
		}

		return nullptr;
	};

	void closeConnect() {
		closesocket(_sock);
		WSACleanup();
		_sock = INVALID_SOCKET;
		_socks.clear();
	};

	bool isRun() {
		return _sock != INVALID_SOCKET;
	}

private:
	int connectSock() {
		sockaddr_in addr;
		_sock = socket(AF_INET, SOCK_STREAM, 0);
		inet_pton(AF_INET, SERVER_IP, &addr.sin_addr.s_addr);
		addr.sin_family = AF_INET;
		addr.sin_port = htons(SERVER_PORT);
		bind(_sock, (const sockaddr*)&addr, sizeof(addr));
		int res = listen(_sock,5);
		_socks.insert(_sock);
		if (INVALID_SOCKET == _sock) {
			closeConnect();
		}
		return _sock;
	};
};

