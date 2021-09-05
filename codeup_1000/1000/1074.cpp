#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {
	int x = 0;
	cin >> x;
	while (1 <= x && x <= 100) {
		cout << x << endl;
		--x;
	}
}