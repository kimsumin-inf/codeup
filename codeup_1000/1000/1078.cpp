#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {
	int x = 0, y = 0;
	cin >> x;
	if (0 > x || x > 100)
		return 0;
	for (int i = 0; i <= x; i++) {
		if (i % 2 == 0) {
			y += i;
		}
	}
	cout << y;
}