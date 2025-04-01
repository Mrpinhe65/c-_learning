/*
string 插入和删除
insert
erase
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void test01()
{
	string str = "hello";

	//插入 insert
	str.insert(1,"111");	//在第 1 的位置插入字符串 "111"
	cout << "str = " << str << endl;
	
	//删除 erase
	str.erase(1,3);			//第 1 的位置删除三个字符
	cout << "str = " << str << endl;
}

int main()
{
	test01();
	return 0;
}
