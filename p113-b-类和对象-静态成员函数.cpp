/*************************************************************************
    > File Name: p113-类和对象-静态成员函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月16日 星期一 11时37分26秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//静态成员函数
//所有对象共享一个函数
//静态成员函数只能访问静态成员变量
class Person{
	public:
		static void func(){
			cout<<"static void func调用"<<endl;
			//静态成员函数可以访问静态成员变量
			cout<<"静态成员变量 m_A=="<<m_A<<endl;
			//静态成员函数不能访问普通成员变量
			cout<<"静态成员函数不能访问普通成员变量"<<endl;
			//m_B=99;//不可以访问
		}
		static int m_A;
		int m_B;
};

int Person::m_A=0;

void test01(){
	//通过对象访问
	cout<<"============通过对象访问静态函数 p.func()============="<<endl;
	Person p;
	p.func();
	//通过类名访问
	cout<<"============通过类名访问静态函数 Person::func()============="<<endl;
	Person::func();
}

int main(){
	test01();
	return 0;
}
