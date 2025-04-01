/*************************************************************************
    > File Name: p126f-类和对象-C++运算符重载-函数调用运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月20日 星期五 15时30分44秒
 ************************************************************************/
#include<iostream>
using namespace std;

//函数调用()运算符也可以重载
//重载后的使用方式非常像函数调用，因此称为仿函数
//仿函数没有固定写法，非常灵活

//了解匿名函数对象

//打印类
class MyPrint
{
	public:
		//重载函数调用运算符
		void operator()(string text)
		{
			cout<<"重载函数运算符 "<<text<<endl;
		}

};

//加法类
class MyAdd
{
	public:
		int operator()(int num1,int num2)
		{
			return num1+num2;
		}
};

void myPrintFunc(string text)
{
	cout<<"函数直接调用 "<<text<<endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("Hello world!");//与函数调用非常类似，所以称为仿函数，实质是重载函数调用运算符()
	myPrintFunc("Hello,world!");
}

void test02()
{
	MyAdd myadd;
	int res=myadd(100,200);
	cout<<"加法类函数调用运算符重载， res="<<res<<endl;

	//匿名函数对象
	cout<<"匿名函数对象 MyAdd()(100,200)= "<<MyAdd()(100,200)<<endl;
}

int main()
{
	test01();
	test02();
	return 0;
}
