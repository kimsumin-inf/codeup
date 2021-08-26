#include <iostream>
using namespace std;

int main() {
	int arr[10] = {};
	int num = 0;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cin >> num;
	cout << arr[num - 1];
	
}