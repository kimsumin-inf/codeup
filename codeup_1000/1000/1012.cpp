#include <iostream>
using namespace std;

int main() {
	float x = 0;
	cin >> x;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout << x;
	return 0;
}