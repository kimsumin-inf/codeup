#include <iostream>
#define SIZE 7
using namespace std;

int main() {
	int arr[SIZE];
	int even[SIZE] = {};
	int sum = 0;
	int min = 1000000;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
		if (arr[i] % 2 != 0) {
			sum += arr[i];
			even[i] += arr[i];
		}
	}

	for (int i = 0; i < SIZE; i++) {
		if (even[i] == 0)
			continue;
		else

		{
			if (min > even[i])
				min = even[i];
		}
	}

	cout << sum << endl;
	cout << min;

}