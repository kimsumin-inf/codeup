#include <iostream>
#include <string>
using namespace std;
int main() {
	long long int x = 0;
	cin >> x;
	if (x >= 90)
		cout << "A";
	else if (x < 90 && x >= 70)
		cout << "B";
	else if (x < 70 && x >= 40)
		cout << "C";
	else if (x < 40)
		cout << "D";
}