#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {
	int x = 0;
	cin >> x;
	while (2 <= x && x <= 101) {
		cout << x - 1 << endl;
		--x;
	}
	cout << 0;
}