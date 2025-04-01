/*************************************************************************
    > File Name: 关系运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 15时08分13秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Person{
public:
	Person(string name,int age){
		m_Name=name;
		m_Age=age;

	}
	//重载关系运算符 ==
	bool operator==(Person &p){
		if(this->m_Name==p.m_Name && this->m_Age==p.m_Age){
			return true;
		}
		return false;
	}
	bool operator!=(Person &p){
		if(this->m_Name==p.m_Name && this->m_Age==p.m_Age){
			return false;
		}
		return true;
	}

	string m_Name;
	int m_Age;
};

void test01(){
	Person p1("Tom",18);
	Person p2("Tom",19);
	cout<<"姓名="<<p1.m_Name<<"， 年龄="<<p1.m_Age<<endl;
	cout<<"姓名="<<p2.m_Name<<"， 年龄="<<p2.m_Age<<endl;
	if(p1!=p2){
		cout<<"p1 和 p2 是不相同的"<<endl;
	}else
	{
		cout<<"p1 和 p2 是相同的"<<endl;
	}
	/*
	if(p1==p2){
		cout<<"p1 和 p2 是相同的"<<endl;
	}else
	{
		cout<<"p1 和 p2 是不相同的"<<endl;
	}
	*/
}

int main(){

	test01();

	return 0;
}
