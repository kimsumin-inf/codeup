#include <iostream>
using namespace std;

enum status = {
	zero, one;
};
int main() {
	int size = 0;
	cin >> size;
	if (size > 50 || size < 3) {
		cin >> size;
	}

	int* card = new int[size-1];
	for (int i = 0; i < size-1; i++) {
		cin >> card[i];
	}
	

	delete[] card;
}