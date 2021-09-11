#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	int num = 1;

	int** arr = new int* [size] {};
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size] {};
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j]= num;
			num += 1;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = size-1; j >= 0; j--) {
			cout <<arr[i][j]<<' ';
		}
		cout << endl;
	}




	for (int i = 0; i < size; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}