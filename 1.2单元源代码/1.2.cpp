#include<iostream>
using namespace std;
const double PI = 3.14159;
int main() {
	double radius, height;
	cout << "请输入圆锥底面的半径：" << endl;
	cin >> radius;
	cout << "请输入圆锥的高" << endl;
	cin >> height;
	double volume = PI * radius * radius * height / 3;
	cout << "圆锥的体积为：" << volume << endl;
	return 0;
}