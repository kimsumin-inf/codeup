#pragma warning (disable:4996)

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long double x = 0;

	cin >> x;
	cout << fixed;
	cout.precision(11);
	cout << x;
}