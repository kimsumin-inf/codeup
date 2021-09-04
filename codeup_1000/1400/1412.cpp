#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string str2;
	int alp[26] = {};
	getline(cin, str);
	char* arr = new char[str.length()];
	for (int i = 0; i < str.length(); i++) {
		if ((int)str[i] >= 'a' && (int)str[i] <= 'z')
			str2 += str[i];
			
	}
	for (int i = 0; i < str2.length(); i++) {
		str2[i]-=(int)'a';
		alp[(int)str2[i]] += 1;
	}
	for (int i = 0; i < 26; i++) {
		cout <<(char)((int)'a'+i)<<':'<< alp[i] <<endl;
	}

	

	delete[]arr;

}