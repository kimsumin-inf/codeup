#include <iostream>
#include <string>
using namespace std;
int main() {
	unsigned int x[3];
	for (int i = 0; i < 3; i++) {
		cin >> x[i];
		if (x[i] % 2 == 0) {
			cout << "even" << endl;
		}
		else
			cout << "odd" << endl;

	}
}