#include <iostream>
using namespace std;

int main() {
	int A = 5 * 60, A_cnt = 0;
	int B = 1 * 60, B_cnt = 0;
	int C = 10, C_cnt = 0;
	int time = 0;
	cin >> time;
	if (((time % A) % B) % C != 0) {
		cout << -1;
		return 0;
	}
	A_cnt = time / A;
	B_cnt = (time % A) / B;
	C_cnt = ((time % A) % B) / C;
	cout << A_cnt << ' ' << B_cnt << ' ' << C_cnt << endl;
}