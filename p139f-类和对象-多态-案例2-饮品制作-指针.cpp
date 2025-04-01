/*************************************************************************
    > File Name: p139f-类和对象-多态-案例2-饮品制作-指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月23日 星期一 17时36分03秒
 ************************************************************************/
#include<iostream>
using namespace std;

class AbstractDrinking
{
	public:
		//煮水
		virtual void Boil()=0;
		//冲泡
		virtual void Brew()=0;
		//倒入杯中
		virtual void PourInCap()=0;
		//加入辅料
		virtual void PutSomething()=0;
		//制作饮品
		void MakeDrinking()
		{
			Boil();
			Brew();
			PourInCap();
			PutSomething();
		}
};

class Coffee:public AbstractDrinking
{
	public:
		//煮水
		virtual void Boil()
		{
			cout<<"煮矿泉水"<<endl;
		}
		//冲泡
		virtual void Brew()
		{
			cout<<"冲泡咖啡"<<endl;
		}
		//倒入杯中
		virtual void PourInCap()
		{
			cout<<"倒入咖啡杯"<<endl;
		}
		//加入辅料
		virtual void PutSomething()
		{
			cout<<"加入方糖和牛奶"<<endl;
		}
};

class Tea:public AbstractDrinking
{
	public:
		//煮水
		virtual void Boil()
		{
			cout<<"煮农夫山泉矿泉水"<<endl;
		}
		//冲泡
		virtual void Brew()
		{
			cout<<"冲泡茶叶"<<endl;
		}
		//倒入杯中
		virtual void PourInCap()
		{
			cout<<"倒入茶杯"<<endl;
		}
		//加入辅料
		virtual void PutSomething()
		{
			cout<<"加入陈皮"<<endl;
		}
};

void doWork(AbstractDrinking * abs)
{
	abs->MakeDrinking();
	delete abs; //开辟的匿名堆区此处已有指针，可以释放
}

void test01()
{
	cout<<"===================="<<endl;
	doWork(new Coffee);//匿名开辟堆区，需要找时机释放
	cout<<"===================="<<endl;
	doWork(new Tea);
	cout<<"===================="<<endl;
}

int main()
{
	test01();
	return 0;
}
