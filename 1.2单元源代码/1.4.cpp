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
	//�˽���
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	cout << "��ʵ��ת��Ϊint�ͣ����ܻ�������ת�����ȼ�С�������ݣ���������" << endl;
	double a = 9.56545662;
	cout << "a��double��Ϊ" << a << endl;
	cout << "a��int��Ϊ��" << static_cast<int>(a) << endl;
	system("pause");
	return 0;
}