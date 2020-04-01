#include<iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
class Test {
	int a;
};

class A {
	
public:
	int _num = 0;
	A(int num) {
		_num = num;
		cout << "A "<< num << endl;
	}
	A(const A& a) {
		cout << "复制构造" << endl;
	}
	A(const A&& a) {
		_num = a._num;
		cout << "移动构造" << endl;
	}
	A() {};
	~A() {
		cout << "~ A" << _num << endl;
	}
};

int main()
{
	map<string, string> mapData;

	mapData["a"] = "aaa";
	mapData["b"] = "bbb";
	mapData["c"] = "ccc";
	mapData["d"] = "ddd";
	mapData["e"] = "eee";
	for (map<string, string>::iterator i = mapData.begin(); i != mapData.end(); i++)
	{
		if (i->first == "b" || i->first == "d")
		{
			mapData.erase(i--);
		}
	}

	for (map<string, string>::iterator i = mapData.begin(); i != mapData.end(); i++)
	{
		cout << i->second << endl;
	}
	int tmp;
	cin >> tmp;
	return 0;
}