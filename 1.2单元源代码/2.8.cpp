#include<iostream>
using namespace std;
double pfg(double a) {
	double xn = a;
	double xn1;
	while (1) {
		xn1 = 0.5 * (xn + a / xn);
		if (fabs(xn1 - xn) < 1e-5){
			break;
		}
		xn = xn1;
	}
	return xn1;
}
int main() {
	cout << "������һ������" << endl;
	double a;
	cin >> a;
	if (a < 0) {
		cout << "��ʵ�����У�������ƽ����" << endl;
	}
	else {
		cout << "a��ƽ����Ϊ" << pfg(a) << endl;
	}


	return 0;
}