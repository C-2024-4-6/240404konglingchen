#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int initX,int initY) {
		x = initX;
		y = initY;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "��ʱλ��Ϊ" << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);
	cout << "��ʼλ��Ϊ" << endl;
	p.display();
	p.setPoint(10, 10);
	cout << "����λ��Ϊ" << endl;
	p.display();
	return 0;
}