#pragma once
#include <iostream>
#include <string>
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