/*************************************************************************
    > File Name: p097-函数高级-函数重载-基本语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月11日 星期三 16时10分42秒
	
	函数名可以相同，提高代码复用性
	条件：
	1.同一作用域下
	2.函数名相同
	3.函数参数类型不同、或者个数不同、或者顺序不同
	
	不能重载的情况：
	函数返回值不是函数重载的条件

 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void func(int a,double b)
{
	cout<<"func的调用---int a,double b"<<a<<","<<b<<endl;
}

void func(double a,int b)
{
	cout<<"func的调用---(double a,int b)"<<a<<","<<b<<endl;
}

int main(){
	func(10,3.1);
	func(3.1,1);
	return 0;
}
