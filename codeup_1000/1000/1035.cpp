#include <iostream>
using namespace std;
int main() {
	int x = 0;
	cin >> hex >> x;
	cout.setf(ios_base::oct, ios_base::basefield);
	cout << x;
}