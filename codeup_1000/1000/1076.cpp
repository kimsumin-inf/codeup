#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {

	char x[2];
	cin >> x[0];
	x[1] = 'a';
	while (1) {
		cout << x[1] << ' ';
		if (x[1] == x[0])
			break;
		++x[1];
	}
}