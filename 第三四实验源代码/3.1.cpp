#include<iostream>
using namespace std;
//�����Լ���ĺ���
int zuidagongyinshu(int m, int n) {
	while (n != 0) {
		int temp = n;
		n = m % n;
		m = temp;

	}
	return m;
}
//�����Լ������С�������ĺ�����ʹ��Ӧ�ò���)
void a(int m, int n, int& gys, int& gbs) {
	gys = zuidagongyinshu(m, n);
	gbs = m * n / gys;
}
int main() {
	cout << "������������Ȼ�������潫Ϊ������������������Լ������󹫱���" << endl;
	int m, n;
	cin >> m >> n;
	int gys,gbs;
	a(m, n, gys, gbs);
	cout << "���Լ��Ϊ" << gys << endl;
	cout << "��С������Ϊ" << gbs << endl;
	return 0;
}