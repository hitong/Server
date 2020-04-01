#include<iostream>
#include <vector>
#include <set>
using namespace std;
class Test {
	int a;
};

int main() {
<<<<<<< HEAD
	set<int> s{1,2,4,5,6,7,8,9};
	for (int i = 0; i < s.size();i++) {
		/*if (s[i]>) {

		}*/
=======
	int count = 0;
	while (true) {
		Test* t = (Test*)malloc(102400);
		delete t;
		count++;
>>>>>>> f1954d4e83267a50a37dcd6333b469624c370d59
	}
	return 0;
}