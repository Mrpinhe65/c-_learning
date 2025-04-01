/*************************************************************************
    > File Name: p122f-类和对象-C++运算符重载-左移运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月19日 星期四 21时18分23秒
 ************************************************************************/
#include<iostream>
using namespace std;

class Person
{
	//一般把类属性写成私有属性
	//利用友元friend设置全局函数
	//属性初始化使用构造函数实现
	friend ostream & operator<<(ostream &cout,Person p);
	
	public:
		Person(int a,int b)
		{
			m_A=a;
			m_B=b;
		}
		/*
		左移运算符通常不用成员函数重载
		成员函数本质上 p.operator<<(cout) 简化版本为 p<<cout
		不能保证cout在左侧
		ostream & operator<<(ostream &cout)
		{
			cout<<"<<运算符成员函数重载 p.m_A="<<this->m_A<<endl;
			cout<<"<<运算符成员函数重载 p.m_B="<<this->m_Bi<<endl;
			return cout;
		}
		*/
	private:
		int m_A;
		int m_B;
};

//只能利用全局函数重载<<(左移)运算符
//void operator<<(cout,p) 
//本质上 operator<<(cout,p)--简化--cout<<p
//cout 的数据类型 ostream
//具体实现如下
//形参后一个参数可用引用，也可不用引用，用引用在后置递增应用中编译有问题
ostream & operator<<(ostream &cout,Person p)
{
	//按需要的输出格式编写cout代码
	cout<<"<<运算符全局函数重载 p.m_A="<<p.m_A<<endl;
	cout<<"<<运算符全局函数重载 p.m_B="<<p.m_B;
	return cout;
}

void test01()
{
	Person p(10,20);
	cout<<p<<endl;
}

int main()
{
	test01();
	return 0;
}
