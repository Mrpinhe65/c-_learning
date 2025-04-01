/*************************************************************************
    > File Name: p179-模板-类模板成员函数类外实现.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月30日 星期五 16时34分48秒
 ************************************************************************/
#include<iostream>
using namespace std;

template<class T1,class T2>
class Person{
public:
	//Person(T1 name,T2 age):m_Name(name),m_Age(age)
	Person(T1 name,T2 age);
	/*
	Person(T1 name,T2 age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	*/

	void ShowPerson();
	/*
	void ShowPerson()
	{
		cout<<"name="<<this->m_Name<<endl;
		cout<<"age="<<this->m_Age<<endl;
	}
	*/

	T1 m_Name;
	T2 m_Age;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
	this->m_Name=name;
	this->m_Age=age;
}

//类模板成员函数类外实现
template<class T1,class T2>
void Person<T1,T2>::ShowPerson()
{
	cout<<"name="<<this->m_Name<<endl;
	cout<<"age="<<this->m_Age<<endl;
}

void test(){
	Person p("类模板成员函数类外实现-推导类型",999);
	p.ShowPerson();
	Person<string,int> p1("类模板成员函数类外实现-指定类型string，int",888);
	p1.ShowPerson();
}

int main(){
	test();
	return 0;
}
