#include"student.h"
#include<iostream>
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int n, const char* nm, char s) {
	num = n;
	for (int i = 0; i < 19; i++) {
		name[i] = nm[i];
	}
	name[19] = '\0';
	sex = s;
}