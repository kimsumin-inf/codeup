#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> hex >> a;
	hex(cout);
	cout.setf(ios::uppercase);

	for (int i = 1; i < 16; i++) {
		cout << a << "*" << i << '=' << a * i << endl;
	}
}
