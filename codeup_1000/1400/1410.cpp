#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int left=0, right=0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			left++;
		}
		else if (str[i] == ')') {
			right++;
		}
		
	}
	cout << left << ' ' << right << endl;
}