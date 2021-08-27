#include <iostream>
#include <stdlib.h>
using namespace std;

class sort {
	int size;
	int True =0;
	int* arr;
	int count=0;
public:
	sort() { 
		input_size();
		arr = new int[size]; }
	~sort() {
		delete[] arr;
	}
	void input_size() {
		cin >> size;
	}
	void input_arr() {
		for (int i = 0; i < size; i++) {
			cin >> arr[i];
		}
	}
	void buble_sort();
	void validation(int x);
};
void sort:: buble_sort() {
	input_arr();
	for (int j=size-1; j>0;j--){
		for (int i = 0; i < j; i++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
		count += 1;
		validation(count);
	}
	
}
void sort:: validation(int x) {
	
	for ( int i= 0; i < size-1; i++) {
		if (arr[i] < arr[i + 1]) {
			True += 1;

		}

	}
	if (True == size - 1) {
		cout << x << endl;
		
		exit(-1);
	}
	else True = 0;
}

int main() {
	sort st;
	st.buble_sort();
}