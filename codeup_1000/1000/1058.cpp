#include <iostream>
#include<cmath>
using namespace std;
int main() {
	bool x, y;
	cin >> x >> y;
	if (x == y && x == 0)
		cout << 1;
	else
		cout << 0;
}