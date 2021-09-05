#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {
	int size;
	cin >> size;

	if (size > 9 || size < 1)
		return 0;

	for (int i = 1; i <= size; i++) {
		if (i % 3 != 0) {
			cout << i << ' ';
		}
		else

			cout << 'X' << ' ';




	}

}