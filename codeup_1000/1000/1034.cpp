#pragma warning (disable:4996)

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long int x = 0;

	cin >> oct >> x;
	cout.setf(ios_base::dec, ios_base::basefield);
	cout << x;
}