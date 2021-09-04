#include <iostream>
#define SIZE 5
using namespace std;

int main() {
	int arr[SIZE];
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	avg = sum / SIZE;
	for (int j=SIZE-1;j>=0;j--){
		for (int i = 0; i < SIZE-1; i++) {
			if (arr[i] > arr[i + 1]){
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	cout << (int)avg<<endl<<(int)arr[2];
	
}