/*************************************************************************
    > File Name: 友元-成员函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 09时29分26秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Building;
class GoodGay{
	public:
		GoodGay();

		void visit();//让其访问Building私有成员
		void visit2();//让其不能访问Building私有成员

		Building * building;
};

class Building{

	//告诉编译器GoodGay中的visit和visit2函数都是本类的友元
	friend void GoodGay::visit();
	friend void GoodGay::visit2();
	
	public:
		Building();
	
	public:
		string m_SittingRoom;
	
	private:
		string m_BedRoom;


};

Building::Building(){
	m_SittingRoom="客厅";
	m_BedRoom="卧室";
}

GoodGay::GoodGay(){
	building=new Building;
}

void GoodGay::visit(){
	cout<<"visit 函数正在访问： "<<building->m_SittingRoom<<endl;
	cout<<"visit 函数正在访问： "<<building->m_BedRoom<<endl;
}

void GoodGay::visit2(){
	cout<<"visit2---函数正在访问： "<<building->m_SittingRoom<<endl;
	cout<<"visit2---函数正在访问： "<<building->m_BedRoom<<endl;
}

void test01(){
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main(){	

	test01();
	
	return 0;
}
