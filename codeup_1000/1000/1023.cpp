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

	while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		cout << ptr << endl;          // �ڸ� ���ڿ� ���
		ptr = strtok(NULL, " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}

	return 0;
}