#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void input() {
		cout << "请输入长方体的长宽高" << endl;
		cin >> length >> width >> height;
	}
	double CalculateVolume() {
		return length * width * height;
	}
	void ShowVolume() {
		cout << "长方体的体积为" << CalculateVolume() << endl;
	}
};
int main() {
	Cuboid cuboids[3];
	for (int i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 << "个长方体的长宽高，将为您计算按体积" << endl;
		cuboids[i].input();
		cuboids[i].ShowVolume();

	}
	return 0;
}