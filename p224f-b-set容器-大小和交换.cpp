#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

// set容器 -大小和交换

class Person
{
    
	public:
	//	bool operator<(const Person &p)
	//	{
	//		if(this->m_Age == p.m_Age)
	//		{
	//			return this->m_Height < p.m_Height;
	//		}
	//		return this->m_Age < p.m_Age;
	//	}
    

		Person(string name, int age, int height)
		{
			this->m_Name = name;
			this->m_Age = age;
			this->m_Height = height;
		}
		string m_Name;
		int m_Age;
		int m_Height;
};

void test01()
{
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	set<Person>s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	s.insert(p6);
}

int main()
{
	test01();
	return 0;
}
