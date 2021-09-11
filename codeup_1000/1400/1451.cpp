#include <iostream>
using namespace std;

int main() {
	int num[10000];
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> num[i];
	}
	for (int j = cnt - 1; j > 0; j--) {
		for (int i = 0; i < j; i++) {
			if (num[i] > num[i + 1]) {
				int tmp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < cnt; i++) {
		cout << num[i] << endl;
	}

}