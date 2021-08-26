#include <iostream>
using namespace std;

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
	for (int i =1 ; i <= size ; i++) {
		for (int j = 0; j < size; j++) {
			if (card[j] == i) {
				continue;
			}
		}
	}

	delete[] card;
}