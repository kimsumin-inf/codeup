#include <iostream>
#define SIZE 10
using namespace std;

int main() {
	int arr[SIZE], sum = 0, avg = 0, max = 0, index = 0;
	int check[1000 / 10] = {};
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	avg = sum / SIZE;

	for (int i = 0; i < SIZE; i++) {
		check[arr[i] / 10] += 1;
	}
	max = check[0];
	for (int i = 1; i < 100; i++) {
		if (max < check[i]) {
			max = check[i];
			index = i;
		}

	}


	cout << avg << endl;
	cout << index * 10 << endl;
}