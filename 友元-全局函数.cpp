/*************************************************************************
    > File Name: 友元-全局函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月09日 星期二 16时09分29秒
 ************************************************************************/
#include"iostream"
using namespace std;
#include"string"

class Building{

	//goodGay 是Building的友元，可以访问Building中的私有成员,关键字：friend
	//类内声明函数
	friend void goodGay(Building *building);
	
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

//全局函数
void goodGay(Building *building)
{
	cout<<"好基友的全局函数 正在访问： "<<building->m_SittingRoom<<endl;
	cout<<"好基友的全局函数 正在访问： "<<building->m_BedRoom<<endl;
}

void test01(){
	Building building;
	goodGay(&building);
}

int main(){

	test01();

	return 0;
}
