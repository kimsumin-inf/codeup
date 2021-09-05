#include <iostream>
using namespace std;
int main() {
	long int x, y, z;
	cin >> x >> y >> z;
	float avg = ((float)x + (float)y + (float)z) / 3;
	cout << (x + y + z) << endl;
	cout << fixed;
	cout.precision(1);
	cout << avg;
}