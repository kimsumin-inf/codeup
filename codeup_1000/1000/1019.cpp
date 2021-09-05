#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int year, hour, min;
	cin >> year;
	cin.ignore(256, '.');
	cin >> hour;
	cin.ignore(256, '.');
	cin >> min;
	cout << setw(4) << setfill('0') << year << "." << setw(2) << setfill('0') << hour << "." << setw(2) << setfill('0') << min;
}