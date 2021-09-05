#pragma warning (disable:4996)

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long int x = 0;

	cin >> x;
	cout.setf(ios_base::oct, ios_base::basefield);
	cout << x;
}