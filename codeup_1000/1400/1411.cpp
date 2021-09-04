#include <iostream>
using namespace std;

int main() {
	int size = 0;
	cin >> size;
	int* arr = new int[size - 1];
	int* num = new int[size + 1]{};
	for (int i = 0; i < size - 1; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size - 1; i++) {
		num[arr[i]] += 1;
	}
	for (int i = 1; i <= size; i++) {
		if (num[i] == 0)
			cout << i << endl;
	}
	delete[]arr;
	delete[]num;
 }