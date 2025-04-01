/*************************************************************************
    > File Name: p174-模板-类模板基本语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月30日 星期五 09时29分26秒
 ************************************************************************/
#include<iostream>
using namespace std;

//类模板
template<class NameType,class AgeType>
class Person{
	public:
		Person(NameType name,AgeType age):m_Name(name),m_Age(age)
		{
			//this->m_Name=name;
			//this->m_Age=age;
		}
		NameType m_Name;
		AgeType m_Age;

};

void test(){
	Person p1("hwd",59);
	cout<<p1.m_Name<<" "<<p1.m_Age<<endl;
	Person<string,int> p2("lxl",56);
	cout<<p2.m_Name<<" "<<p2.m_Age<<endl;
}

int main(){

	test();
	return 0;
}
