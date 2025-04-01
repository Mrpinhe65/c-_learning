/*************************************************************************
    > File Name: p03-陈子清-c++多线程编码-线程函数中的数据未定义错误.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月16日 星期三 05时04分42秒
 ************************************************************************/
#include<iostream>
#include<thread>
using namespace std;

//1.传递临时变量的问题
//ref 是c++的引用参数修饰符,传递引用类型

//2.传递指针或引用指向临时变量的问题
//

thread t;

void foo(int & x)
{
	x += 1;
}

void test()
{
	int a = 1;
	//ref 是c++的引用参数修饰符
	t = thread(foo, ref(a));
	
}

int main()
{
	/*
	int a = 1;
	//ref 是c++的引用参数修饰符
	thread t(foo, ref(a));
	*/
	test();
	t.join();
	
	//cout<<"a = "<<a<<endl;

	return 0;
}
