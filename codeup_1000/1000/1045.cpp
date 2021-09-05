#include <iostream>
using namespace std;
int main() {
	int x = 0, y = 0;
	float z;

	cin >> x >> y;
	z = (float)x / (float)y;
	cout << x + y << endl << x - y << endl << x * y << endl << x / y << endl;
	cout << x % y << endl;
	cout << fixed;
	cout.precision(2);
	cout << z;

}