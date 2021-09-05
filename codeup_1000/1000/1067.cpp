#include <iostream>
#include <string>
using namespace std;
int main() {
	long long int x = 0;
	cin >> x;
	if (x > 0) {
		cout << "plus" << endl;
		if (x % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
	else {
		cout << "minus" << endl;
		if (x % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
}