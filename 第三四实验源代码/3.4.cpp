#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double side1, side2, side3;
	cout << "�����������ε������߳�" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		double areaValue = area(side1, side2, side3);
		cout << "�����ε����Ϊ��" << areaValue << endl;
	}
	else {
		cout << "����߳��������޷�����������" << endl;
	}

}