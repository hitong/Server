#include "Client.h"
const char* SERVER_IP = "127.0.0.1";
const short SERVER_PORT = 12345;

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
	Header header;
	int ret = recv(_sock, (char*)&header, sizeof(header), 0);
	if (ret <= 0) {
		return nullptr;
	}
	//cout << header->_cmd << " " << header->_size << endl;
	//if (header._cmd == MESSAGE) {
	Message* uq_message = (Message*)malloc(sizeof(Message) + header._size);
	recv(_sock, (char*)uq_message->data, header._size, 0);
	memcpy(uq_message, &header, sizeof(Header));
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