#include <iostream>
#define LEFT '>'
#define EQUAL '='
#define RIGHT '<'
using namespace std;

int main() {
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++) {
		cout << i+1 << ':'<<' ';
		for (int j=0;j<size;j++){
			if (i == j)
				continue;
			if (arr[i] > arr[j])
				cout << LEFT<<' ';
			else if (arr[i] == arr[j])
				cout << EQUAL << ' ';
			else
				cout << RIGHT << ' ';
		}
		cout << endl;
	}
	delete[] arr;

}