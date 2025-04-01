/*************************************************************************
    > File Name: 容器set-自定义数据类型排序.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月21日 星期日 07时16分07秒
 ************************************************************************/
#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

class Person{
public:
	Person(string name,int age){
		this->m_Name=name;
		this->m_Age=age;
	}
	string m_Name;
	int m_Age;
};

//自定义数据类型需要指定排序规则
class MyCompare{
public:
	bool operator()(const Person&p1,const Person&p2) const
	{
		return p1.m_Age>p2.m_Age;
	
	}
};

void test(){
	set<Person,MyCompare>s;
	Person p1("Tom",21);
	Person p2("Jerry",23);
	Person p3("Rose",20);
	Person p4("John",25);
	Person p5("Robert",18);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	
	for(auto p:s){
		cout<<p.m_Name<<" ,"<<p.m_Age<<endl;
	}
	
	for(set<Person,MyCompare>::const_iterator it=s.begin();it!=s.end();it++){
		cout<<"姓名："<<(*it).m_Name<<" , 年龄："<<(*it).m_Age<<" ";
		//cout<<"姓名："<<it->m_Name<<" , 年龄："<<it->m_Age<<" ";
	}
	cout<<endl;
}

int main(){

	test();

	return 0;
}
