#include<iostream>
#include <vector>

using namespace std;
class Test {
	int a;
};

int main() {
	int count = 0;
	while (true) {
		Test* t = (Test*)malloc(102400);
		delete t;
		count++;
	}
	return 0;
}