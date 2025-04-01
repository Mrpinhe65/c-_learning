/*************************************************************************
    > File Name: p119-37-类和对象-友元-成员函数做友元.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月25日 星期日 08时11分37秒
 ************************************************************************/
#include"public.hpp"
// 成员函数做友元，需要指明所属类（作用域）
// 否则编译器不知道是全局函数还是成员函数
// 两个类互相引用，需要用指针的方式避免互锁
// 用到的类在实现前必须先声明
// 用到仅声明的类成员，用类外实现，放到后面，避免编译器顺序编译时出错
class Building;

class GoodGay{
	public:
		//以下成员涉及到Building成员，因Building未实现
		//所以用类外实现方式放到Building实现代码之后
		//这样可以避免顺序编译时出错
		GoodGay();//构造函数 类内声明 类外实现员
		~GoodGay();//析构函数 类内声明 类外实现员
		void visit();//成员函数 类内声明 类外实现
		//指针属性
		Building * building;
};

class Building{
	friend void GoodGay::visit();//成员函数做友元，需要指定作用域，以便和全局函数区别开来
	public:
		Building();
		string m_SittingRoom;
	private:
		string m_BedRoom;
};


void test(){
	GoodGay gg;
	gg.visit();
}

int main(){
	test();

	return 0;
}

GoodGay::GoodGay(){
	building=new Building;
}

GoodGay::~GoodGay(){
	delete building;
	cout<<"析构函数,释放堆区内存"<<endl;
}

void GoodGay::visit(){
	cout<<"public SittingRoom"<<building->m_SittingRoom<<endl;
	cout<<"public BedRoom"<<building->m_BedRoom<<endl;
}

Building::Building(){
	m_SittingRoom="客厅";
    m_BedRoom="卧室";
}
