#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << "������������" << endl;
	cin >> a >> b;
	char p;
	cout << "�������������ķ��ţ�+  ��   *   /)" << endl;
	cin >> p;
	switch (p)
	{
	case '+':
		cout << a<<"+"<<b<<"=" << a + b;
		break;
	case '-':
		cout << a<<"-"<<b<<"=" << a - b;
		break;
	case'*':
		cout << a << "*" << b << "=" << a * b;
		break;
	case'/':
		if (b != 0) {
			cout << a << "/" << b << "= " << a / b << endl;
			break;
		}
		else {
			cout << "��������Ϊ0" << endl;
			break;
		}
	
	}

	return 0;
}