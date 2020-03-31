#include <iostream>
#include "Client.h"


int main() {
	Client client;
	cout << client.initSock() << endl;
	string user = "user1";
	string psw = "psw1";
	int count = 0;
	while (client.isRun()) {
		unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 1024) };
		uq_message->_size = 1024;
		uq_message->_cmd = MESSAGE;
	/*	memcpy(uq_message->data, "hello", 6);*/
		client.sendMessage(uq_message.get());
		auto ret = client.recvMessage();
		if (ret== nullptr) {
			break;
		}
		free(ret);
	//	if (count++ % 1000 == 0) {
			cout << "cout :" << count++ << endl;
	//	}
	}
	client.closeConnect();
	return 0;
}