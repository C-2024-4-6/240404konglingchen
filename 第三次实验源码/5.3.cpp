#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void input() {
		cout << "�����볤����ĳ����" << endl;
		cin >> length >> width >> height;
	}
	double CalculateVolume() {
		return length * width * height;
	}
	void ShowVolume() {
		cout << "����������Ϊ" << CalculateVolume() << endl;
	}
};
int main() {
	Cuboid cuboids[3];
	for (int i = 0; i < 3; i++) {
		cout << "�������" << i + 1 << "��������ĳ���ߣ���Ϊ�����㰴���" << endl;
		cuboids[i].input();
		cuboids[i].ShowVolume();

	}
	return 0;
}