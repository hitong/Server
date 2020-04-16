#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <thread>
#include <mutex>
#include "a.pb.h"
#include <Windows.h>
#include "addressbook.pb.h"
#include "MemStream.h"
using namespace std;

#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "libprotoc.lib")
using namespace TestImport;
using namespace tutorial;

class Test {
public:
	string a  = "hello any";
};

int commodity = 0;
mutex a;
condition_variable cv;
//condition_variable<mutex> cv = condition_variable<>{a};

//class Consumer {
//public:
//	int count = 0;
//	bool consumption() {
//		unique_lock<mutex> ul{a};
//		while (true) {
//			if (a.try_lock()) {
//				cv.wait(ul, commodity > 0);
//				count++;
//				commodity--;
//				cout << "consumption" << endl;
//				cv.notify_one();
//				Sleep(2000);
//			}
//
//		}
//	}
//};
//
//class Producer {
//public:
//	int count = 0;
//	bool produce() {
//		unique_lock<mutex> ul{a};
//		while (true) {
//			if (a.try_lock()) {
//				cv.wait(ul, commodity < 10);
//				count++;
//				commodity++;
//				cout << "produce" << endl;
//				cv.notify_all();
//			}
//		}
//	}
//};
#define Ser
int main()
{
#ifdef Ser
	unique_ptr<MemStream> stm{new OutputMemStream()};
	cout << stm->isInStream() << endl;
	stm->Serialize("Hello World!",strlen("Hello World!") + 1);
	cout << stm->get() << endl;


#endif

#ifdef TestMultiThread
	Consumer c;
	Producer p;
	thread t1 = thread([&c] {
		c.consumption();
	});
	thread t2 =  thread([&p] {
		p.produce();
	});
	t1.join();
	t2.join();
	TestMessage tm;
	string str;
	Submessage sub;
	sub.set_name("sub_name");
	tm.add_rany()->PackFrom(sub);
	tm.set_message("set message");
	cout << tm.SerializePartialAsString() << endl;
#endif //TestMultiThread
	/*Person* p = addr.add_people();
	addr.GetCachedSize();
	string str;
	addr.AppendToString(&str);
	cout << addr.GetCachedSize() << endl;*/
	return 0;
}