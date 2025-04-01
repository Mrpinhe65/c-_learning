/*************************************************************************
    > File Name: p119-37-类和对象-友元-友元类.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月24日 星期六 20时46分41秒
 ************************************************************************/
#include"public.hpp"

class Building;

class GoodGay{
	public:
		GoodGay();//构造函数 类内声明，类外实现
		~GoodGay();//析构函数，类内声明，类外实现
	public:
		void visit();//类内声明，类外实现
		Building *building;
};

class Building{
	friend class GoodGay;
	public:
		Building();//类内声明，类外实现
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

Building::Building()//构造函数 类内声明，类外实现
{
		m_SittingRoom="客厅";
		m_BedRoom="卧室";
}

GoodGay::GoodGay(){
	building=new Building;
}

GoodGay::~GoodGay(){
	delete building;
	cout<<"析构函数"<<endl;
}

void GoodGay::visit(){
	cout<<"好基友访问 SittingRoom"<<building->m_SittingRoom<<endl;
	cout<<"好基友访问 BedRoom"<<building->m_BedRoom<<endl;
}

void test(){
	GoodGay gg;
	gg.visit();
}

int main(){
	test();
	return 0;
}
