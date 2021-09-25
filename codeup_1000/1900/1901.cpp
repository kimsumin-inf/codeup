#include <iostream>
using namespace std;

void num_stream(int n) {
	if (n < 1) return;
	num_stream(n - 1);
	cout << n << ' ';

}

int main() {
	int size;
	cin >> size;
	num_stream(size);
}