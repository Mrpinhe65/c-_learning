/*************************************************************************
    > File Name: 类模板.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月15日 星期一 12时43分57秒
 ************************************************************************/
#include<iostream>
using namespace std;


template<class NameType,class AgeType> 
class Person{
public:
	Person(NameType name,AgeType age){
		this->m_Name=name;
		this->m_Age=age;
	}
	
	NameType m_Name;
	AgeType m_Age;
	
	void showPerson(){
		cout<<"this->m_Name="<<this->m_Name<<endl;
		cout<<"this->m_Age="<<this->m_Age<<endl;
	}
};

void test01(){
	Person<string,int> p1("孙悟空",999);
	p1.showPerson();
}

int main(){
	test01();

	return 0;
}
