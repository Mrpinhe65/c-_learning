/*************************************************************************
    > File Name: p112-29-类和对象-对象特征-类对象作为类成员.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月12日 星期一 14时19分34秒
 ************************************************************************/
#include"public.hpp"

class Phone{
	public:
		Phone(string pName){
			m_PName=pName;
			cout<<"Phone 构造函数"<<endl;
		}
		~Phone()
		{
			cout<<"Phone 析构函数"<<endl;
		}

		string m_PName;
};

class Person{
	public:
		Person(string name,string pName):m_Name(name),m_Phone(pName)
		{
			cout<<"Person 构造函数"<<endl;
		}
		~Person()
		{
			cout<<"Person 析构函数"<<endl;
		}

		string m_Name;
		Phone m_Phone;
};

void test(){
	Person p("张三","苹果MAX");
	cout<<p.m_Name<<" 拿着 "<<p.m_Phone.m_PName<<endl;
}
int main(){
	test();
	return 0;
}
