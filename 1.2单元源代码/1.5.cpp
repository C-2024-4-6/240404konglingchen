#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	double hs, cs;
	cout << "�����뻪���¶�" << endl;
	cin >> hs;
	cs = (hs - 32) * 5 / 9;
	cout << fixed<<setprecision(2) << "�����¶�Ϊ" << cs;
}