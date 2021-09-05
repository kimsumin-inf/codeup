#pragma warning (disable:4996)

#include <iostream>
#include <iomanip>
using namespace std;
char result(int);

int main() {
	int mon = 0;
	cin >> mon;
	switch (result(mon)) {
	case 1:
		cout << "winter";
		break;
	case 2:
		cout << "spring";
		break;
	case 3:
		cout << "summer";
		break;
	case 4:
		cout << "fall";
		break;

	}
}
char result(int mon) {
	switch (mon) {
	case 12:
	case 1:
	case 2:
		return 1;
		break;
	case 3:
	case 4:
	case 5:
		return 2;
		break;
	case 6:
	case 7:
	case 8:
		return 3;
		break;
	case 9:
	case 10:
	case 11:
		return 4;
		break;

	}
}