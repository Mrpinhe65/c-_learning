#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//vector 容器中存放自定义数据类型 如 struct class

//自定义类Person
class Person
{
public:
	Person(string name,int age)
	{
		this -> m_Name = name;
		this -> m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void myPrint(Person p)
{
	cout << p.m_Name << ", " << p.m_Age << endl; 
}

void test01()
{
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	Person p5("eee",50);

	vector<Person>v;
	
	//向容器中添加自定义数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据 for_each
	for_each(v.begin(),v.end(),myPrint);
	
	//遍历容器中的数据 for
	for(vector<Person>::iterator it = v.begin(); it != v.end(); it ++)
	{
		cout << (*it).m_Name << ", " <<  (*it).m_Age << endl; 
	}
}

//存放自定义数据的指针
void test02()
{
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	Person p5("eee",50);
	
	vector<Person*>v;

	//向容器中添加自定义数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历
	cout << "遍历数据指针" << endl;
	for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) -> m_Name << ", " << (*it) -> m_Age << endl;
	}
}

int main()
{
	test01();
	test02();
	return 0;
}
