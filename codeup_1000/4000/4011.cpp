#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string str; 
	cin >> str;
	int* arr = new int[str.length()];
	for (int i = 0; i < str.length(); i++) {
		arr[i] = str[i] - '0';
	}
	
	if (arr[7] <  3) {
		if (arr[7]== 1) {
			cout << 1900 + arr[0]* 10 + arr[1] << '/'
				<< setw(2) <<setfill('0')<< arr[2] * 10 + arr[3] << '/'
				<< setw(2) << setfill('0') << arr[4] * 10 + arr[5] << ' '
				<< 'M' << endl;
		}
		else if (arr[7] == 2) {
			cout << 1900 + arr[0] * 10 + arr[1] << '/'
				<< setw(2) << setfill('0') << arr[2] * 10 + arr[3] << '/'
				<< setw(2) << setfill('0') << arr[4] * 10 + arr[5] << ' '
				<< 'F' << endl;
		}

	}
	else if (arr[7] >= 3) {
		if (arr[7] == 3) {
			cout << 2000 + arr[0] * 10 + arr[1] << '/'
				<< setw(2) << setfill('0') << arr[2] * 10 + arr[3] << '/'
				<< setw(2) << setfill('0') << arr[4] * 10 + arr[5] << ' '
				<< 'M' << endl;
		}

		else if (arr[7] == 4) {
			cout << 2000 + arr[0] * 10 + arr[1] << '/'
				<< setw(2) << setfill('0') << arr[2] * 10 + arr[3] << '/'
				<< setw(2) << setfill('0') <<(arr[4] * 10 + arr[5]) << ' '
				<< 'F' << endl;
		}
	}




}