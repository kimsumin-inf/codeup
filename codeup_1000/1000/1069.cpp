#include <iostream>
#include <string>
using namespace std;
int main() {
	char x;
	cin >> x;
	switch (x) {
	case 'A':
	{cout << "best!!!"; break; }
	case 'B':
	{cout << "good!!"; break; }
	case 'C':
	{cout << "run!"; break; }
	case 'D':
	{cout << "slowly~"; break; }
	default:
		cout << "what?";
	}
}