#include<iostream>
using namespace std;
int zdgys(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main() {
	int a, b;
	cout << "����������������" << endl;
	cin >> a >> b;
	cout << "���Լ��Ϊ" << zdgys(a, b) << endl;
	cout << "��С������Ϊ" << a * b / zdgys(a, b) << endl;


	return 0;
}

