#include <iostream>
using namespace std;

int main() {
	int num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	for (int j = 4; j > 0; j--) {
		for (int i = 0; i < j; i++) {
			if (num[i] > num[i + 1]) {
				int tmp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = tmp;
			}
		}
	}

	cout << num[2] << endl;
}