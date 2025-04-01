/*************************************************************************
    > File Name: p128f-类和对象-继承-继承方式.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月21日 星期六 16时11分11秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//继承方式
//父类
class Base
{
	public:
		int m_A;
	protected:
		int m_B;
	private:
		int m_C;
};

//子类1
//公共继承 public
class Son1:public Base
{
	void func()
	{
		m_A=10;//父类中公共权限，在子类中依然是公共权限
		m_B=10;//父类中保护权限，在子类中依然是保护权限
		//m_C=10;//父类中私有权限，在子类中不能访问
	}
};

//子类二 保护继承 protected
class Son2:protected Base
{
	public:
		int m_A=10;//父类中公共权限，在子类中是保护权限
		int m_B=10;//父类中保护权限，在子类中依然是保护权限
		//int m_C=10;//父类中私有权限，在子类中不能访问
};

//子类三 私有继承 private
class Son3:private Base
{
	public:
		//int m_A=10;//父类中公共权限，在子类中是私有权限
		//int m_B=10;//父类中保护权限，在子类中是私有权限
		//int m_C=10;//父类中私有权限，在子类中不可访问
};

class GrandSon3:public Son3
{
	public:
		void func()
		{
			/*
			m_A=1000;//Son3中是私有保护，在GrandSon中不可访问
			m_B=1000;//Son3中是私有保护，在GrandSon中不可访问
			*/
		}
}

void test01()
{
	Son1 s1;
	s1.m_A=100;//子类中是公共权限，类外可以访问
	//s1.m_B=100;//子类中是保护权限，类外不可以访问

	Son2 s2;
	//s2.m_A=100;//子类中是保护权限，类外不可以访问
	//s2.m_B=100;//子类中是保护权限，类外不可以访问
	
	Son3 s3;
	//s3.m_A=100;//子类中是私有保护，类外不能访问
	//s3.m_B=100;//子类中是私有保护，类外不能访问
}

int main()
{
	test01();
	return 0;
}
