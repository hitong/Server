#pragma once
#include <iostream>
#include <string.h>
using namespace std;

enum CMD {
	INVALID,
	LOGIN,
	LOGOUT,
	MESSAGE
};

const string S_LOGINSUCCESSFUL = "succesful";

class Header {
public:
	int _size = 0;
	int _cmd = INVALID;
	Header() = default;
	Header(int size, int cmd) :_size(size), _cmd(cmd) {};
};

class Login :public Header {
public:
	char _user[16]{ 0 };
	char _password[16]{ 0 };
	Login() :Header(32, LOGIN) {};
	Login(string user, string password) {
		memcpy(_user, user.c_str(), user.size());
		memcpy(_password, password.c_str(), password.size());
	}
};

class Message :public Header {
public:
	Message(int size = 0) :Header(size, MESSAGE) {};
	char data[0];
};

const int CHCHE_SIZE = 1024;
class SockData {
public:
	int _pos = 0;
	char* _chche1 = nullptr;
	char* _chche2 = nullptr;
	char* _ip = nullptr;
	short _port = -1;
	SockData() = default;
	SockData(const char* ip,const short port) {
		_ip = new char[strlen(ip) + 1];
		memcpy(_ip,ip,strlen(ip) + 1);
		_port = port;
		_chche1 = new char[CHCHE_SIZE];
		_chche2 = new char[CHCHE_SIZE * 10];
	}

	SockData(const SockData&) = delete;
	SockData& operator=(const SockData&) = delete;

	SockData(SockData&& oth) {
		_chche1 = oth._chche1;
		_chche2 = oth._chche2;
		_ip = oth._ip;
		_port = oth._port;
		_pos = oth._pos;

		oth._chche1 = nullptr;
		oth._chche2 = nullptr;
		oth._ip = nullptr;
		oth._port = -1;
		oth._pos = 0;
	}

	~SockData() {
		delete _ip;
		delete[] _chche1;
		delete[] _chche2;
	}

};