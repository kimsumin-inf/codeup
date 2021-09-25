#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	for (int i = 0; i < size*2-1; i++) {
		if (i <= size){
			for (int j=0;j<i+1;j++){
			
				cout << "*";

			}
		}
		else {
			for (int j = size; j>=0; j--) {
				j -= 1;
				cout << "*";
				
			}
		}

		cout << endl; 
	}
}