#include<iostream>
#include<string>
using namespace std;

int main() {
	char word[20];
	cin >> word;
	for (int i = 0; i < 20; i++) {
		if (word[i] == '\0')break;
		cout << "'" << word[i] << "'" << endl;
	}
}