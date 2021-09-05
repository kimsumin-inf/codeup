#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int hour, min;
	cin >> hour;
	cin.ignore(256, ':');
	cin >> min;
	cout << hour << ":" << min;
}