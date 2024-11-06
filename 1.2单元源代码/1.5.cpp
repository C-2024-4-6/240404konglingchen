#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	double hs, cs;
	cout << "请输入华氏温度" << endl;
	cin >> hs;
	cs = (hs - 32) * 5 / 9;
	cout << fixed<<setprecision(2) << "摄氏温度为" << cs;
}