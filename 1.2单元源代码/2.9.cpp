#include<iostream>
using namespace std;
int main() {
	int day = 1;
	int num = 2;
	int totalnum = num;
	while (totalnum <= 100) {
		day++;
		num = num * 2;
		totalnum += num;
	}
	day--;
	totalnum -= num;
	double averageprice = totalnum * 0.8 / day;
	cout << "ÿ��ƽ����" << averageprice << "Ԫ";
	return 0;
}