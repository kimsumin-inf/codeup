#include <iostream>
using namespace std;

int main() {
	int arr[10] = {};
	int num = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cin >> num;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == num) {
			cout << i + 1 << endl;
			break;
		}
		
	}
	
}