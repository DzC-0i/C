#include  <iostream>
using namespace std;

//常量的定义方式
//#define 宏常量
//const修饰的变量

#define Day 7  //定义在文件上方即使main外面

int main() {
	//01.define定义的常量
	cout << "一周共有多少天：" << Day << " 天" << endl;

	//02.const修饰的变量 同样为常量
	const int month = 12;

	cout << "一年共有几个月：" << month << " 个月"<< endl;

	system("pause");

	return 0;
}
