#include<iostream>
using namespace std;
int calculate_peach(int day) {
	if (day == 10)
		return 1;
	int rest = (calculate_peach(day + 1) + 1) * 2;
	return rest;
}
int main() {
	cout << "第一天猴子共摘了" << calculate_peach(1) << "个桃子" << endl;
	return 0;
}