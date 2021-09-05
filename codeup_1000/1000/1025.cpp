#include <iostream>
using namespace std;

int main() {
	int x; cin >> x;
	cout << "[" << (x / 10000) * 10000 << "]" << endl;
	cout << "[" << ((x / 1000) % 10) * 1000 << "]" << endl;
	cout << "[" << ((x / 100) % 10) * 100 << "]" << endl;
	cout << "[" << ((x / 10) % 10) * 10 << "]" << endl;
	cout << "[" << x % 10 << "]" << endl;
}