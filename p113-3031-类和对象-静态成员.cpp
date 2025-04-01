/*************************************************************************
    > File Name: p113-3031-类和对象-静态成员.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月12日 星期一 15时14分16秒
 ************************************************************************/
#include"public.hpp"

//静态成员变量
class Person{
	public:
	//所有对象都共享同一份数据
	//编译阶段就分配内存
	//类内声明，类外初始化操作
	static int m_A;

	//静态成员函数
	static void func(){
		cout<<"static void func 调用"<<endl;
	}
};

//类内声明，类外初始化
int Person::m_A=100;

void test(){
	Person p;
	cout<<p.m_A<<endl;
	cout<<"通过对象访问="<<p.m_A<<endl;
	
	//通过类名进行访问
	cout<<"通过类名访问="<<Person::m_A<<endl;

	Person p2;
	p2.m_A=200;
	cout<<"通过对象访问="<<p.m_A<<endl;
	
	//通过类名进行访问
	cout<<"通过类名访问="<<Person::m_A<<endl;
	
	//通过对象访问成员函数
	Person p3;
	p3.func();

	//通过类名访问成员函数
	Person::func();
}

int main(){
	test();
	return 0;
}
