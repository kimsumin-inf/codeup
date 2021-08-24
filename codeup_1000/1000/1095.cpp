#include <iostream>
#include <limits.h>
using namespace std;


int main() {
	int cnt = 0;
	int min = INT_MAX;
	cin >> cnt;
	if (cnt < 1 || cnt > 10000)
		cin >> cnt;
	int* call_student = new int[cnt] {};
	for (int i = 0; i < cnt; i++) {
		cin >> call_student[i];
		if (min > call_student[i]) 
			min = call_student[i];
		
	}
	cout << min << endl;
	delete[]call_student;
}