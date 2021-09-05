#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {
	int x = 0, y = 0;
	cin >> x;
	for (int i = 0; i <= x; i++) {
		y += i;
		if (y >= x) {
			cout << i;
			return 0;
		}
	}
}