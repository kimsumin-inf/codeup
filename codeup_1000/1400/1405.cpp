#include <iostream>
using namespace std;

int main() {
	int n = 0,cnt=0;
	cin >> n;
	if (n > 1000 || n < 1)
		cin >> n;
	int* arr = new int[n + 1]{};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
	
	while (cnt<n*n-n) {
		arr[n] = arr[0];
		for (int i = 0; i < n; i++){
			arr[i] = arr[i + 1];
			cnt++;
		}

		for (int i = 0; i < n; i++)
			cout << arr[i] << ' ';
		cout << endl;
		
	}
	
}