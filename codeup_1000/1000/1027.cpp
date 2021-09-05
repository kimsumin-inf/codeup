#pragma warning (disable:4996)

#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main() {
	int year = 0, month = 0, day = 0;
	scanf("%d.%d.%d", &year, &month, &day);

	cout << setw(2) << setfill('0') << day << '-' << setw(2) << setfill('0') << month << '-' << setw(4) << setfill('0') << year;
}