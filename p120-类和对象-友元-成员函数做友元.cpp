/*************************************************************************
    > File Name: p120-类和对象-友元-成员函数做友元.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月18日 星期三 21时04分40秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

// 成员函数做友元，需要指明所属类（作用域）
// 否则编译器不知道是全局函数还是成员函数
// 两个类互相引用，需要用指针的方式避免互锁
// 用到的类在实现前必须先声明
// 用到仅声明的类成员，用类外实现，放到后面，避免编译器顺序编译时出错

class Building; //类的声明

class GoodGay{
	public:
		Building * house;//指针属性
		//以下成员涉及到Building成员，因Building未实现
		//所以用类外实现方式放到Building实现代码之后
		//这样可以避免顺序编译时出错
		GoodGay();
		~GoodGay();
		void visit1();
		void visit2();
};

class Building
{
	friend void GoodGay::visit2();
	public:
		Building();
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

void test01(){
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main()
{
	test01();
	return 0;
}

GoodGay::GoodGay()
{
	house=new Building;
}
GoodGay::~GoodGay()
{
	delete house;
}
void GoodGay::visit1()
{
	cout<<"visit1函数正在访问 "<<house->m_SittingRoom<<endl;
}
void GoodGay::visit2()
{
	cout<<"visit2函数正在访问 "<<house->m_BedRoom<<endl;
}

Building::Building()
{
	m_SittingRoom="客厅";
	m_BedRoom="卧室";
}
