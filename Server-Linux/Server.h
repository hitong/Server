#pragma once
#include <iostream>
#include <string>
#include <arpa/inet.h>
#include <sys/socket.h>
#include "Message.h"
#include <unistd.h>
#include <algorithm>
#include <arpa/inet.h>
#include <map>
extern const char* SERVER_IP;
extern const short SERVER_PORT;
const int INVALID_SOCKET = -1;

enum RECVSTATE {
	RECV_CONTINUE,
	RECV_CLOSE,
	RECV_ACCEPT,
	RECV_ERROR,
	RECV_OK
};

class Server
{
public:
	int _sock = INVALID_SOCKET;
	int maxSock = 0;
	map<int,SockData> _socks;
	Server() = default;

	int initSock() {
		if (isRun()) {
			return -1;
		}
		
		return connectSock();

	};
	int sendMessage(int sock, Header* header ) {
		if (isRun() && sock != INVALID_SOCKET) {
			send(sock, (const char*)header, sizeof(Header) + header->_size, 0);
		}
		return 0;
	}

	int recvMessage(int sock,Header*& header) {
		if (sock == _sock) {
			sockaddr_in addr;
			socklen_t sock_len = sizeof(sockaddr_in);
			int sock_c = accept(sock, (sockaddr*)&addr, &sock_len);
			if (sock_c == INVALID_SOCKET) {
				cout << "client connect error" << endl;
			}
			char buf[17]{ 0 };
			inet_ntop(AF_INET, &addr.sin_addr, buf, sizeof(buf));
			_socks.erase(sock_c);
			_socks.emplace(sock_c, SockData(buf, addr.sin_port));
			maxSock = max(maxSock, sock_c + 1);
			return RECV_ACCEPT;
		}

		if (_socks.find(sock) != _socks.end()) {
			int len = recv(sock, _socks[sock]._chche1, CHCHE_SIZE, 0);
			if (len == 0) {
				close(sock);
			//	_socks.erase(sock);
				return RECV_CLOSE;
			}
			if (len < 0) {
				return RECV_ERROR;
			}
			memcpy(_socks[sock]._chche2 + _socks[sock]._pos, _socks[sock]._chche1,len);
			_socks[sock]._pos += len;
			if (_socks[sock]._pos < sizeof(Header)) {
				return RECV_CONTINUE;
			}
			Header* head = (Header*)_socks[sock]._chche2;
			if (head->_size + sizeof(Header) > _socks[sock]._pos) {
				return RECV_CONTINUE;
			}
			header = (Header*)malloc(sizeof(Header) + head->_size);
			memcpy(header, head,head->_size + sizeof(Header));
			if (head->_size + sizeof(Header) < _socks[sock]._pos) {
				memcpy(head, head + head->_size + sizeof(Header), 
					_socks[sock]._pos- head->_size + sizeof(Header));
			}
			_socks[sock]._pos -= head->_size + sizeof(Header);
		}

		return RECV_OK;
	};

	void closeConnect() {
		close(_sock);
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
		int res = listen(_sock, 5);
		if (INVALID_SOCKET == _sock) {
			closeConnect();
		}
		_socks.emplace(_sock, SockData(SERVER_IP,SERVER_PORT));
		maxSock = _sock + 1;
		return _sock;
	};
};


