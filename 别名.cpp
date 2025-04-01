/*************************************************************************
	> File Name: 别名.cpp
	> 作者: 品赫先生
	> Mail: huangpinhe65@gmail.com
	> Created Time: 2024年07月07日 星期日 23时06分39秒
 ************************************************************************/
#include "iostream"
using namespace std;

int main()
{
	int a = 10;
	int &b = a;
	cout << "a的地址" << &a << endl;
	cout << "b的地址" << &b << endl;
	b = 20;
	cout << "a==" << a << endl;
	cout << "b==" << b << endl;

	return 0;
}
