/*************************************************************************
    > File Name: p177-模板-类模板对象做函数参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月30日 星期五 11时02分44秒
 ************************************************************************/
#include<iostream>
using namespace std;

template<class T1,class T2>
class Person{
	public:
		Person(T1 name,T2 age):m_Name(name),m_Age(age)
		{ }
		void ShowPerson(){
			cout<<"Name: "<<this->m_Name<<", Age: "<<this->m_Age<<endl;
		}
		T1 m_Name;
		T2 m_Age;
};

//指定传入类型
void printPerson1(Person<string,int> &p){
	p.ShowPerson();
}

void test01(){
	Person<string,int> p1("传入指定类型",900);
	printPerson1(p1);
}

// 参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2>&p){
	p.ShowPerson();
	cout<<"T1 的类型"<<typeid(T1).name()<<endl; // 查看 T1 的数据类型
	cout<<"T2 的类型"<<typeid(T2).name()<<endl;// 查看 T2 的数据类型
}

void test02(){
	Person<string,int> p("参数模板化",1000);
	printPerson2(p);
}

//整个类模板化
template<class T>
void printPerson3(T &p){
	p.ShowPerson();
	cout<<"T 的类型:"<<typeid(T).name()<<endl;
	cout<<"p 的类型:"<<typeid(p).name()<<endl;
}

void test03(){
	Person<string,int> p("整个类模板化",1600);
	printPerson3(p);
}

int main(){
	test01();
	test02();
	test03();
	return 0;
}
