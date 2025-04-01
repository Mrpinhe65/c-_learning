/*
 string 字符串比较
 比较结果相等，返回0
 > 返回1
 < 返回-1
 函数原型
 int compare(const string& s) const; //与字符串s比较
 int compare(const char* s) const;   //与字符串s比较
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if(str1.compare(str2) ==0)
	{
		cout << "str1 等于 str2" << endl;
	}
	else if(str1.compare(str2) > 0)
	{
		cout << "str1 大于 str2" << endl;
	}
	else
	{
		cout << "str1 小于 str2" << endl;
	}
}

int main()
{
	test01();
	return 0;
}
