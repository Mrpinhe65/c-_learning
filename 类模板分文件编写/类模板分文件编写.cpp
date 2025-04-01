/*************************************************************************
    > File Name: 类模板分文件编写.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月16日 星期二 14时56分04秒
 ************************************************************************/
#include<iostream>
using namespace std;

template<class T1,class T2>
class Person{
	public:
		Person(T1 name,T2 age);
		//{
		//	this->m_Name=name;
		//	this->m_Age=age;
		//}

		void showPerson();

		T1 m_Name;
		T2 m_Age;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){
	this->m_Name=name;
	this->m_Age=age;
}

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
