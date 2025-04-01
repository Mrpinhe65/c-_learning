#include<iostream>
using namespace std;

class Person
{};

class Animal
{
	public:
		int m_Age;
};

class Dog
{
	public:
	string m_Name;
};

class Cat
{
public:
	int m_Age;
	string m_Name;
};

int main()
{
	Person p1;
	cout<<"空类的内存占用"<<sizeof(p1)<<endl;

	Animal p2;
	cout<<"含有一个成员属性int的类的内存占用"<<sizeof(p2)<<endl;

	Dog p3;
	cout<<"含有一个成员属性string的类的内存占用"<<sizeof(p3)<<endl;

	Cat p4;
	// 含有内存对齐的问题
	cout<<"含有一个成员属性int和 string的类的内存占用"<<sizeof(p4)<<endl;

	return 0;
}
