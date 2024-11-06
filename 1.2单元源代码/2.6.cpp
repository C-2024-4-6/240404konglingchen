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
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	cout << "最大公约数为" << zdgys(a, b) << endl;
	cout << "最小公倍数为" << a * b / zdgys(a, b) << endl;


	return 0;
}

