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
struct SockData {
	int _pos = 0 ;
	char* chche1 = new char[CHCHE_SIZE];
	char* chche2 = new char[CHCHE_SIZE * 10];
	char* ip = nullptr;
	short port = -1;
};