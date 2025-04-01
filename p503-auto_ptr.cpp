/*************************************************************************
    > File Name: p503-auto_ptr.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月05日 星期六 08时04分08秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"构造函数"<<endl;
	}
	~Person()
	{
		cout<<"析构函数"<<endl;
	}
};

int main()
{
	//创建auto_ptr 对象
	auto_ptr<Person> p(new Person);
	//auto_ptr 不适合用于管理动态内存的数组对象
	
	//获取资源指针
	cout<<"p.get()="<<p.get()<<endl;

	//释放资源所有权，p 不再持有动态资源
	Person *p1=p.release();

	//释放资源，并指向新的资源
	p.reset(new Person);

	//只释放资源
	p.reset();

	return 0;
}
