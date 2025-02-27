#include<iostream>
using namespace std;

int main3() {

	//单精度float 占用空间4字节 有效数字范围7位有效数字
	float f1 = 3.14f;

	//双精度double 占用8字节 15~16位有效数字
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	//占用空间
	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}