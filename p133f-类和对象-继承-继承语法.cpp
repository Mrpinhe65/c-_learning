/*************************************************************************
    > File Name: p133f-类和对象-继承-继承语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月22日 星期日 16时08分11秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

//了解多继承
//C++实际开发中不建议多继承

class Base1
{
	public:
		Base1()
		{
			m_A="Base1 类";
		}
		string m_A;
};

class Base2
{
	public:
		Base2()
		{
			m_A="Base2 类";
		}
		string m_A;
};

class Son:public Base1,public Base2
{
	public:
		Son()
		{
			m_C="子类 m_C";
			m_C="子类 m_D";
		}
		string m_C;
		string m_D;
};

void test01()
{
	Son s;
	cout<<"size of s(Son)="<<sizeof(s)<<endl;
	cout<<"Base1 s.Base1::m_A="<<s.Base1::m_A<<endl;
	cout<<"Base2 s.Base1::m_A="<<s.Base2::m_A<<endl;
}

int main()
{
	test01();
	return 0;
}
