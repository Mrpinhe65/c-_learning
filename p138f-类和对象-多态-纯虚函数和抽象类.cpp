/*************************************************************************
    > File Name: p138f-类和对象-多态-纯虚函数和抽象类.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月23日 星期一 16时56分49秒
 ************************************************************************/
#include<iostream>
using namespace std;

//纯虚函数和抽象类
class Base
{
	public:
		//纯虚函数的语法如下
		//只要有一个纯虚函数，这个类就是抽象类
		//抽象类特点：
		//1.无法实例化对象
		//2.抽象类的子类，必须重写抽象类纯虚函数，否则子类也属于纯虚函数
		virtual void func()=0;

};

class Son:public Base
{
	public:
		virtual void func()
		{
			cout<<"Son子类中的 func"<<endl;
		};
};

class Daughter:public Base
{
	public:
		virtual void func()
		{
			cout<<"Daughter子类中的 func"<<endl;
		}
};

class Brother:public Base
{
	public:
		virtual void func()
		{
			cout<<"Brother子类中的 func"<<endl;
		}
};

void test01()
{
	Base * base=new Son;
	base->func();
	delete base;
	base=new Daughter;
	base->func();
	delete base;
	base=new Brother;
	base->func();
	delete base;
	base=nullptr;
}

int main()
{
	test01();
	return 0;
}
