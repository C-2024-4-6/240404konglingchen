#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "������߳�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a - b<c && a + c>b && a - c<b && b + c>a && b - c < a) {
		cout << "�ܳ�Ϊ" << a + b + c << endl;

	}
	else {
		cout << "����δ�ܹ���������" << endl;
	}
	if ((a== b == c) || (a ==b && a != b && a != c) || (a == c && a != b && b != c) || (b == c && b != a && b != c))

	{
		cout << "��������Ϊ����������" << endl;
	}
	return 0;
}