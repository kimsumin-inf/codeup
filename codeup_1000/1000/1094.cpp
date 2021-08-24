#include <iostream>
using namespace std;


int main() {
	int cnt = 0;
	cin >> cnt;
	if (cnt < 1 || cnt > 10000)
		cin >> cnt;
	int* call_student = new int[cnt] {};
	for (int i = 0; i < cnt; i++) {
		cin >> call_student[i];
	}
	for (int i = cnt ; i>0; i--) {
		cout << call_student[i-1]<<' ';
	}
	delete[]call_student;
}