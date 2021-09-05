#pragma warning (disable:4996)
using namespace std;
#include<iostream>
int main() {

	int casee;
	cin >> casee;
	long int* Case = new  long int[casee];

	for (int i = 0; i < casee; i++) {
		cin >> Case[i];
	}
	for (int j = 0; j < casee; j++) {
		cout << Case[j] << endl;
	}
	delete[] Case;
}