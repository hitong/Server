#pragma once
#include <iostream>
#include <string>
#include <winsock2.h>  
#include <WS2tcpip.h>
#include "Message.h"

#pragma comment(lib,"ws2_32.lib")

extern const char* SERVER_IP;
extern const short SERVER_PORT;
class Client
{
public:
	Client() = default;

	int initSock() ;
	int sendMessage(Header* header);

	Message* recvMessage();

	void closeConnect();
	bool isRun() {return _sock != INVALID_SOCKET;}

private:
	int _sock = INVALID_SOCKET;
	int connectSock();
};

