#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double side1, side2, side3;
	cout << "请输入三角形的三条边长" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		double areaValue = area(side1, side2, side3);
		cout << "三角形的面积为：" << areaValue << endl;
	}
	else {
		cout << "输入边长不合理，无法构成三角形" << endl;
	}

}