#include <iostream>
using namespace std;

int main() {
	string temp, str;
	cin >> temp;
	int cnt = 0;
	for (int i = 0; i < temp.length(); i++) {
		if (temp[i] == ':') {
			cnt += 1;
			continue;
		}
		if (cnt == 1) {
			str += temp[i];
		}
	}
	if (str == "00") {
		cout << 0 << endl;
	}
	else
		cout << str;
}
