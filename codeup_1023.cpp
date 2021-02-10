-------------------------------------
2021-02-10
codeup 1023
-------------------------------------
#pragma warning (disable:4996)
#include <string.h>
#include <iostream>
using namespace std;

int main() {
		string str = "";
			cin >> str;
				char* arr = new char[str.length()];
					for (int i = 0; i < str.length(); i++) {
								arr[i] = str.at(i);
									}
						char* ptr = strtok(arr, ".");

							while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
									{
												cout << ptr << endl;          // 자른 문자열 출력
														ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
															}

								return 0;
}
