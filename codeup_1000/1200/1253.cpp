#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;

	}
	for (int i = a; i <= b; i++) {
		cout << i << ' ';
	}
}