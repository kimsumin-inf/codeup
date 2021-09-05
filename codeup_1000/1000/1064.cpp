#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cout << ((x < y ? x : y) < z ? (x < y ? x : y) : z);
}