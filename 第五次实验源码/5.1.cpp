#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	Time() :hour(0), minute(0), sec(0) {

	}
	void SetTime(int h, int m, int s) {
		hour = h;
		minute = m;
		sec = s;
	}
	void ShowTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	
};
int main() {
	Time t1;
	t1.SetTime(18, 13, 15);
	t1.ShowTime();
	return 0;
}