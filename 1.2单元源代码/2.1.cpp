#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		a = a - 32;
		cout << a << endl;
	}
	else {
		cout << (int)(a + 1) << endl;
	}



	return 0;
}