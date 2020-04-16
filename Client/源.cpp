#include <iostream>
#include "Client.h"
#include <thread>
#include <fstream>
#include "Message.pb.h"
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "libprotoc.lib")

const char* HELLO = "hello";


int main() {
#define Protobuf
#ifdef Protobuf
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	const int nCount = 1;
	thread* t[nCount];
	for (int i = 0; i < nCount; i++) {
		t[i] = new thread([] {
		//	Client* client = new Client();
		//	cout << client->initSock() << endl;
			Protocol::Head* head = new Protocol::Head();
			fstream in("./test.txt",ios::in|ios::binary);
			head->ParseFromIstream(&in);
			cout << head->cmd() << endl;
			cout << head->size() << endl;
			if (head->has_user()) {
				cout << head->user().usr() << endl;
				cout << head->user().psw() << endl;
			}
			else {
				cout << head->file().file_name() << endl;
			}
#ifdef SET

			head->set_cmd(Protocol::Head_CMD::Head_CMD_USER);
			head->mutable_user()->set_usr("我我我");
			head->mutable_user()->set_psw("你你你");
			head->set_size(head->ByteSizeLong());
#endif // SET

			int count = 0;

	//		Header* header = nullptr;
	//		unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + strlen(HELLO) + 1) };
	//		uq_message->_size = strlen(HELLO) + 1;
//			uq_message->_cmd = MESSAGE;
//			memcpy(uq_message->data, HELLO, uq_message->_size);
	//		head->SerializeToString(&chche);
			fstream o("./test.txt", ios::out|ios::binary);
			cout << head->size() << endl;
			char* chche = new char[head->size() + 1];
			/*cout << */
			cout << head->SerializePartialToArray(chche, head->size()) << endl;
		//	o << chche << endl;
			cout << head->SerializeToOstream(&o) << endl;
			o.close();
		//	client->sendSerializeStr(chche);

			//while (client->isRun()) {
			//	int state = client->recvMessage(header);
			//	if (state == RECV_CLOSE || state == RECV_ERROR) {
			//		cout << "sock out" << endl;
			//		break;
			//	}
			//	if (state == RECV_OK) {
			//		//	cout << header->_cmd << endl;
			//		delete header;
			//		if (count++ % 10 == 0) {
			//			cout << "<thread " << this_thread::get_id() << "> 正确处理收发次数:" << count << endl;
			//		}
			//		unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 2048) };
			//		uq_message->_size = 2048;
			//		uq_message->_cmd = MESSAGE;
			//		//	memcpy(uq_message->data, HELLO, uq_message->_size);
			//		client->sendMessage(uq_message.get());
			//	}
			//}
			//client->closeConnect();
			//delete client;
			});
		//Sleep(1000);
		t[i]->join();
	}
	/*while (true) {
		Sleep(1000000);
	}
*/


#endif // Protobuf


#ifdef PAST

	const int nCount = 1024;
	thread* t[nCount];
	for (int i = 0; i < nCount; i++) {
		t[i] = new thread([] {
			Client* client = new Client();
			cout << client->initSock() << endl;
			string user = "user1";
			string psw = "psw1";
			int count = 0;
			Header* header = nullptr;
			unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + strlen(HELLO) + 1) };
			uq_message->_size = strlen(HELLO) + 1;
			uq_message->_cmd = MESSAGE;
			memcpy(uq_message->data, HELLO, uq_message->_size);
			client->sendMessage(uq_message.get());
			while (client->isRun()) {
				int state = client->recvMessage(header);
				if (state == RECV_CLOSE || state == RECV_ERROR) {
					cout << "sock out" << endl;
					break;
				}
				if (state == RECV_OK) {
					//	cout << header->_cmd << endl;
					delete header;
					if (count++ % 10 == 0) {
						cout << "<thread " << this_thread::get_id() << "> 正确处理收发次数:" << count << endl;
					}
					unique_ptr<Message> uq_message{ (Message*)malloc(sizeof(Message) + 2048) };
					uq_message->_size = 2048;
					uq_message->_cmd = MESSAGE;
					//	memcpy(uq_message->data, HELLO, uq_message->_size);
					client->sendMessage(uq_message.get());
				}
			}
			client->closeConnect();
			delete client;
		});
		//Sleep(1000);
		t[i]->detach();
 	}
	while (true) {
		Sleep(1000000);
	}
#endif // PAST

	return 0;
}