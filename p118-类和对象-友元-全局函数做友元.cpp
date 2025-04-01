/*************************************************************************
    > File Name: p118-类和对象-友元-全局函数做友元.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月17日 星期二 14时26分46秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//全局函数做友元
class Building
{

	friend void goodGay(Building &building);
	public:
		Building()
		{
			m_SittingRoom="客厅";
			m_BedRoom="卧室";
		}
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

void goodGay(Building &building)
{
	cout<<"访问公共属性m_SittingRoom===="<<building.m_SittingRoom<<endl;
	cout<<"访问私有属性m_BedRoom========"<<building.m_BedRoom<<endl;
}

void test01()
{
	Building building;
	goodGay(building);
}

int main()
{
	test01();
	return 0;
}
