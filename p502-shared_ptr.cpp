/*************************************************************************
    > File Name: p502-智能指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月04日 星期五 22时16分30秒
 ************************************************************************/
#include<iostream>
#include<memory>
#include<string>
using namespace std;

//c++ 智能指针
//bilibili 原子之音
//智能指针种类
//1. unique_ptr ----独占指针
//1.1 任何给定的时刻，只能有一个指针管理内存
//1.2 当指针超出作用域时，内存将自动释放
//1.3 该类型指针不可Copy，只可以Move
//1.4 通过已有裸指针创建
//1.5 通过new创建
//1.6 通过 make_unique 创建 ----推荐
//1.7 unique_ptr 可以通过 get() 获取地址
//1.8 unique_ptr实现了 -> 与 *
//1.8.1 可以通过 -> 调用成员函数
//1.8.2 可以通过 * 调用 dereferencing
//2. shared_ptr ----计数指针
//3. weak_ptr   ----计数指针的补充
//

class MM
{
	public:
		MM(string name,int age):m_Name(name),m_Age(age)
		{
			cout<<"构造函数初始化"<<endl;
		}
		void print()
		{
			cout<<"m_Name: "<<m_Name<<", m_Age: "<<m_Age<<endl;
		}
		~MM()
		{
			cout<<"析构函数，对象退出"<<endl;
		}
	private:
		string m_Name;
		int m_Age;
};

void testShared_ptr()
{
	// 模板的类型 指针所指向的类型
	shared_ptr<int> pInt;
	if(!pInt)
	{
		cout<<"没有初始化的话，就是空的智能指针对象"<<endl;
	}
	//创建智能指针对象
	shared_ptr<int> pNum(new int(100));
	
	//了解其中的成员
	/*
	 1.get() 函数 返回一个内置指针，指向管理对象，不能做delete
	 2.use_count() 统计引用管理对象的智能指针对象数
	 3.swap() 交换
	 4.reset() 重新设置管理对象
	*/
	cout<<"pNum.use_count()="<<pNum.use_count()<<endl;
	cout<<"pNum.get()="<<pNum.get()<<endl;
	cout<<"*pNum.get()="<<*pNum.get()<<endl;
	cout<<"*pNum="<<*pNum<<endl;

	//智能对象与类的关系
	{
		shared_ptr<MM> pMM(new MM("lisa",19));
		pMM->print();
		pMM.get()->print();
	}
	
	//make_shared 创建方式 函数参数由MM类的构造函数决定
	shared_ptr xf=make_shared<MM> ("xf",18);
	xf->print();

	//智能指针之间的关系
	shared_ptr<MM> p1(new MM("小美",23));
	p1->print();
	cout<<"p1.use_count()="<<p1.use_count()<<endl;
	shared_ptr<MM> p2=p1;
	p2->print();
	cout<<"p2.use_count()="<<p2.use_count()<<endl;

	//get()方法注意 get()获取的指针不要轻易去delete
	MM * p3=p2.get();
	p3->print();
	//delete p3; // delete p3 也就把 p1 p2 的指针删除，对象丢失，还会造成重复清理内存错误
	
	//reset()
	p2.reset();
	cout<<"p2.use_count()="<<p2.use_count()<<endl;

	//删除器 智能指针对象管理的内存无法直接delete时，需要手动释放
	//shared_ptr<MM> p4(new MM[10],[](MM* p5){delete[] p5;});

}
int main()
{
	testShared_ptr();
	return 0;
}
