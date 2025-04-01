/*************************************************************************
    > File Name: p131f-类和对象-继承-同名成员处理.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月22日 星期日 14时09分04秒
 ************************************************************************/
#include<iostream>
using namespace std;
//当子类和父类出现同名的成员，通过子类对象
//访问子类同名成员，直接访问即可
//访问父类同名成员，需要加作用域

class Base
{
	public:
		Base()
		{
			m_A="class Base";
		}

		void func()
		{
			cout<<"Base-func函数调用"<<endl;
		}
		string m_A;
};

class Son:public Base
{
	public:
		Son()
		{
			m_A="class Son";
		}

		void funcBase()
		{
			cout<<"子类对象调用函数，当父类中有这个函数，而子类中没有与父类同名的函数，则调用父类中的函数---funcBas"<<endl;
		}
		void func()
		{
			cout<<"Son-func函数调用"<<endl;
		}
		string m_A;
};

//同名成员属性的访问方式
void test01()
{
	Son s;
	cout<<"子类对象直接访问子类同名成员:           s.m_A="<<s.m_A<<endl;
	cout<<"子类对象加作用域访问父类同名成员: s.Base::m_A="<<s.Base::m_A<<endl;
}

//同名成员函数访问方式
void test02()
{
	Son s;
	//子类对象调用函数，当父类中有这个函数，而子类中没有与父类同名的函数，则调用父类中的函数---funcBase
	s.funcBase();
	
	//当子类和父类有同名函数，则子类对象优先调用子类同名函数，父类同名函数调用需要加作用域
	//子类对象调用子类同名成员函数，直接调用
	s.func();
	//子类对象调用父类同名成员函数，加作用域
	s.Base::func();
}

int main()
{
	test01();
	test02();
	return 0;
}
