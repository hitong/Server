#include<iostream>
#include <vector>
#include <set>
#include <map>
#include "a.pb.h"
#include "addressbook.pb.h"

using namespace std;

#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "libprotoc.lib")
using namespace TestImport;
using namespace tutorial;

class Test {
public:
	string a  = "hello any";
};


int main()
{
	TestMessage tm;
	string str;
	Submessage sub;
	sub.set_name("sub_name");
	tm.add_rany()->PackFrom(sub);
	tm.set_message("set message");
	cout << tm.SerializePartialAsString() << endl;
	/*Person* p = addr.add_people();
	addr.GetCachedSize();
	string str;
	addr.AppendToString(&str);
	cout << addr.GetCachedSize() << endl;*/
	return 0;
}