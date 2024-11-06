#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << "请输入两个数" << endl;
	cin >> a >> b;
	char p;
	cout << "请输入您想计算的符号（+  —   *   /)" << endl;
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
			cout << "除数不能为0" << endl;
			break;
		}
	
	}

	return 0;
}