#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int type:" << testUnint << endl;//oct
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4)<<static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	//八进制
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	cout << "将实数转化为int型，可能会因数据转化精度减小而丢数据，例子如下" << endl;
	double a = 9.56545662;
	cout << "a的double型为" << a << endl;
	cout << "a的int型为：" << static_cast<int>(a) << endl;
	system("pause");
	return 0;
}