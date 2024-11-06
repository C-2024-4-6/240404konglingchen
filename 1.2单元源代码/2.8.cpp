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
	cout << "请输入一个数字" << endl;
	double a;
	cin >> a;
	if (a < 0) {
		cout << "在实数域中，负数无平方根" << endl;
	}
	else {
		cout << "a的平方根为" << pfg(a) << endl;
	}


	return 0;
}