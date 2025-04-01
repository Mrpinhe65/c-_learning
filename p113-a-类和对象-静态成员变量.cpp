/*************************************************************************
    > File Name: p113-类和对象-静态成员.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月16日 星期一 10时10分08秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//静态成员变量
//所有对象共享同一份数据
//编译阶段分配内存
//类内声明，类外初始化
//关键字 static
//通过对象可以访问
//通过类名也可以访问
//静态成员变量也是有访问权限

class Person{
	public:
		void printStatic(){
			cout<<"私有属性的静态变量过类内访问--m_B=="<<m_B<<endl;
			cout<<"==========================================="<<endl;
			cout<<"普通变量过类内访问--m_C=="<<m_C<<endl;
			cout<<"==========================================="<<endl;
		}
		static int m_A;
		int m_C;
	private:
		static int m_B;
};
int Person::m_A=100;//类外初始化的格式
int Person::m_B=200;//类外初始化的格式

void test01(){
	Person p;
	cout<<"p.m_A="<<p.m_A<<endl;
	Person p2;
	p2.m_A=200;//p2修改静态变量后，依然是所有对象共享
	cout<<"p.m_A="<<p.m_A<<endl;//p的m_A共享，所以也是200，而不是之前的100
}

void test02(){
	//通过对象可以访问静态变量
	//通过类名也可以访问静态变量
	cout<<"================================"<<endl;
	Person p3;
	p3.m_C=333;
	Person p4;
	p4.m_C=444;
	cout<<"通过对象访问-------p3.m_A=="<<p3.m_A<<endl;
	cout<<"================================"<<endl;
	cout<<"通过类名访问--Person::m_A=="<<Person::m_A<<endl;
	cout<<"================================"<<endl;
	/*
	//私有权限的静态变量在类外不可访问
	cout<<"通过类名访问--Person::m_B=="<<Person::m_B<<endl;
	*/
	p3.printStatic();
	p4.printStatic();
}
int main(){
	//test01();
	test02();
	return 0;
}
