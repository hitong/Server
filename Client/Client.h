#pragma once
#include <iostream>
#include <string>
#include <winsock2.h>  
#include <WS2tcpip.h>
#include "Message.h"

#pragma comment(lib,"ws2_32.lib")

extern const char* SERVER_IP;
extern const short SERVER_PORT;
const int CHCHE_SIZE = 10240;
enum RECVSTATE {
	RECV_CONTINUE,
	RECV_CLOSE,
	RECV_ACCEPT,
	RECV_ERROR,
	RECV_OK
};
class Client
{
public:
	Client() = default;

	int initSock() ;
	int sendMessage(Header* header);

	int sendSerializeStr(const string& str) {
		if (isRun()) {
			send(_sock, str.c_str(), str.size(), 0);
		}
		return 0;
	}

	int recvMessage(Header*& header);

	void closeConnect();
	bool isRun() {return _sock != INVALID_SOCKET;}
	int sock() { return _sock; };
private:
	char _chche[CHCHE_SIZE]{0};//一级缓存
	char _chche2[CHCHE_SIZE * 10]{0};//二级缓存
	int _posPre = 0;
	int _posLast = 0;
	int _sock = INVALID_SOCKET;
	int connectSock();
};

