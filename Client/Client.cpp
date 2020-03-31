#include "Client.h"
const char* SERVER_IP = "127.0.0.1";
const short SERVER_PORT = 12345;
//const int CHCHE_SIZE = 10240;

int Client::initSock()
{
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

}

int Client::sendMessage(Header* header)
{
	if (isRun()) {
		send(_sock, (const char*)header, sizeof(Header) + header->_size, 0);
	}
	return 0;
}

Message* Client::recvMessage()
{
	int nRead = recv(_sock, _chche, CHCHE_SIZE, 0);
	if (nRead < 0) {
		return nullptr;
	} 
	if (nRead == 0) {
		closeConnect();
		return nullptr;
	}
	memcpy(_chche2 + _posLast,_chche,nRead);
	_posLast += nRead;
	if (_posLast < sizeof(Header)) {
		return nullptr;
	}
	Header* header = (Header*)_chche2;
	if (header->_size + sizeof(Header) > _posLast) {
		return nullptr;
	}
	//cout << header->_cmd << " " << header->_size << endl;
	//if (header._cmd == MESSAGE) {
	Message* uq_message = (Message*)malloc(sizeof(Message) + header->_size);
	memcpy(uq_message, &_chche2, sizeof(Header) + header->_size);
	_posLast -= sizeof(Header) + header->_size;
	if (_posLast) {
		memcpy(_chche2, _chche2+ sizeof(Header) + header->_size, _posLast);
	}
	return uq_message;
	//}

//	return nullptr;
}

void Client::closeConnect()
{
	closesocket(_sock);
	WSACleanup();
	_sock = INVALID_SOCKET;
}

int Client::connectSock()
{
	sockaddr_in addr;
	_sock = socket(AF_INET, SOCK_STREAM, 0);
	cout << _sock << endl;
	inet_pton(AF_INET, SERVER_IP, &addr.sin_addr.s_addr);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(SERVER_PORT);
	int res = connect(_sock, (const sockaddr*)&addr, sizeof(addr));
	if (res != 0) {
		closeConnect();
	}
	return res;
}