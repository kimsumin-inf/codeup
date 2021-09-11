#include <iostream>
using namespace std;
int main() {
	string str;
	cin >> str;
	int cnt_cC = 0;
	int cnt_cc = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'c' || str[i] == 'C') {
			cnt_cC++;
			if (str[i + 1] == 'c' || str[i + 1] == 'C')
				cnt_cc += 1;
		}

	}

	cout << cnt_cC << endl << cnt_cc;
}