#include<iostream>
using namespace std;
int calculate_peach(int day) {
	if (day == 10)
		return 1;
	int rest = (calculate_peach(day + 1) + 1) * 2;
	return rest;
}
int main() {
	cout << "��һ����ӹ�ժ��" << calculate_peach(1) << "������" << endl;
	return 0;
}