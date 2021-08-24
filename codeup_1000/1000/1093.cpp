#include <iostream>
using namespace std;


int main() {
	int cnt = 0;
	cin >> cnt;
	if (cnt <1 ||cnt > 10000)
		cin >> cnt;
	int* call_student = new int[cnt] {};
	int Attendance[23] = {};
	for (int i = 0; i < cnt; i++) {
		cin >> call_student[i];
		Attendance[call_student[i]-1]+=1;
	}
	
	for (int i = 0; i < 23; i++) {
		cout << Attendance[i] << ' ';
	}
	delete[] call_student;
}