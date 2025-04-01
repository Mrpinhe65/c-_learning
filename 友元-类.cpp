/*************************************************************************
    > File Name: 友元-类.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月09日 星期二 16时40分56秒
 ************************************************************************/
#include "iostream"
using namespace std;
#include"string"

class Building{
	friend class GoodGay;
	public:
		Building(){
			m_SittingRoom="客厅";
			m_BedRoom="卧室";
		}
		
	public:
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

class GoodGay{
	public:
		GoodGay(){
			building=new Building;
		}
		
		void visit(){
			cout<<"好友类正在访问： "<<building->m_SittingRoom<<endl;
			cout<<"好友类正在访问： "<<building->m_BedRoom<<endl;
		}
	public:
		Building *building;
};


void test01(){

	GoodGay gg;
	gg.visit();
}

int main(){
	test01();
	return 0;
}
