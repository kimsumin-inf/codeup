#include <iostream>

#include <string>
using namespace std;
void swap(string& a, string& b) {
	string tmp = a;
	a = b;
	b = tmp;

}
int main() {
	string tmp,str1,str2;
	int cnt = 0;
	getline(cin, tmp);
	for (int i = 0; i < tmp.length(); i++) {
		if (tmp[i] == ' '){
			cnt += 1;
			continue;
		}
		if (cnt == 0) {
			str1 += tmp[i];

		}
		else str2 += tmp[i];
	}
	if (str1.length() > str2.length()) {
		swap(str1, str2);
	}
	else if (str1.length() == str2.length()) {
		if (str1 > str2)
			swap(str1, str2);
	}
	cout << str1<<endl<<str2;
}