#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "请输入边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a - b<c && a + c>b && a - c<b && b + c>a && b - c < a&&a>0&&b>0&&c>0) {
		cout << "周长为" << a + b + c << endl;

	}
	else {
		cout << "三边未能构成三角形" << endl;
	}
	if ((a== b&&b == c) || (a ==b && c != b && a != c) || (a == c && a != b && b != c) || (b == c && b != a && b != c))

	{
		cout << "该三角形为等腰三角形" << endl;
	}
	return 0;
}
