/*************************************************************************
    > File Name: 类模板成员函数类外实现.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月16日 星期二 14时27分00秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<string>

template<class T1,class T2>
class Person{
	public:
		Person(T1 name,T2 age);//构造函数类内声明
		//{
		//	this->m_Name=name;
		//	this->m_Age=age;
		//}

		void showPerson();
		//{
		//	cout<<"姓名："<<this->m_Name<<" ,年龄："<<this->m_Age<<endl;
		//}

		T1 m_Name;
		T2 m_Age;
};

//构造函数类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){
	this->m_Name=name;
	this->m_Age=age;
}

//成员函数类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson(){
	cout<<"姓名："<<this->m_Name<<" ,年龄："<<this->m_Age<<endl;
}

void test01(){
	Person<string,int>p("Tom",23);
	p.showPerson();
}

int main(){

	test01();

	return 0;
}
