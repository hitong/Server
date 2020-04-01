#include <iostream>
#include "Client.h"

const char* HELLO = "hello";
int main() {
	cout << sizeof(Message) << endl;
	Client client;
	cout << client.initSock() << endl;
	string user = "user1";
	string psw = "psw1";
	int count = 0; 
	Header* header = nullptr;
	unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 1024) };
	uq_message->_size = 1024;
	uq_message->_cmd = MESSAGE;
	//	memcpy(uq_message->data, HELLO, uq_message->_size);
	client.sendMessage(uq_message.get());
	while (client.isRun()) {
		int state = client.recvMessage(header);
		if (state == RECV_CLOSE || state == RECV_ERROR) {
			cout << "sock out" << endl;
			break;
		}
		if (state == RECV_OK) {
		//	cout << header->_cmd << endl;
			delete header;
			if (count++ % 10 == 0) {
				cout << "cout :" << count << endl;
			}
			unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 2048) };
			uq_message->_size = 2048;
			uq_message->_cmd = MESSAGE;
			//	memcpy(uq_message->data, HELLO, uq_message->_size);
			client.sendMessage(uq_message.get());
		}
	}
	client.closeConnect();
	return 0;
}