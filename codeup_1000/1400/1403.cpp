#include <iostream>
using namespace std;

int main() {
	int k, cnt = 0;
	cin >> k;
	if (k > 100)
		cin >> k;
	int* arr = new int[k];
	for (int i = 0; i < k; i++) {

		cin >> arr[i];
	}


	for (int i = 0; i < k; i++) {

		cout << arr[i] << endl;
		cnt += 1;
		if (cnt == k)
			i -= k;
	}

}