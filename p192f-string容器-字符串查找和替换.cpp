/*
 string 字符串查找与替换
函数原型
int find(const string& str, int pos = 0) const; //查找str第一次出现位置，从pos开始
int find(const char* s, int pos = 0) const;     //查找s第一次出现的位置，从pos开始
int find(const char* s, int pos, int n) const;  //从pos位置开始查找s的前n个字符第一次出现的位置
int find(const char c, int pos= 0) const;       //查找字符c第一次出现的位置，从pos开始查找
int rfind(const string& str, int pos = npos) const; //查找str最后一次位置，从pos开始
int rfind(const char* s,int pos = npos) const; //查找s最后一次出现位置，从pos开始查找
int rfind(const char* s, int pos, int n) const;	//从pos查找s的前n个字符最后一次位置
int rfind(const char c,int pos = 0) const;		//查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n, const char* s ); //替换从pos开始的n个字符为字符串s
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//查找
void test01()
{
	string str1 = "abcdefg";
	int pos = str1.find("de");
	cout << "pos = " << pos <<endl;

	pos = str1.find("df");
	cout << "pos = " << pos <<endl;

	//rfind
	//从右往左查找
	pos = str1.rfind("de");
	cout << "pos = " << pos <<endl;
	
		
}

//替换
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1,3,"1111");
	cout << "replace " << str1 << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}
