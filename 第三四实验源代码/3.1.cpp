#include<iostream>
using namespace std;
//求最大公约数的函数
int zuidagongyinshu(int m, int n) {
	while (n != 0) {
		int temp = n;
		n = m % n;
		m = temp;

	}
	return m;
}
//求最大公约数和最小公倍数的函数（使用应用参数)
void a(int m, int n, int& gys, int& gbs) {
	gys = zuidagongyinshu(m, n);
	gbs = m * n / gys;
}
int main() {
	cout << "请输入两个自然数，下面将为您求出这两个数的最大公约数和最大公倍数" << endl;
	int m, n;
	cin >> m >> n;
	int gys,gbs;
	a(m, n, gys, gbs);
	cout << "最大公约数为" << gys << endl;
	cout << "最小公倍数为" << gbs << endl;
	return 0;
}