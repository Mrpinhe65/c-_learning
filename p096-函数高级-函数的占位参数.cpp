/*************************************************************************
    > File Name: p096-函数高级-函数的占位参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月11日 星期三 15时55分26秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//占位参数也可以有默认值
void func(int a,int=20) //后一个形参只有 数据类型，没有形参变量名----就是占位参数，函数调用时必须补齐实参
{
	cout<<"This is func"<<endl;
}

int main(){
	//func(10，5);//5就是补齐的实参，对应占位参数
	func(10);//占位符有默认参数，不需传实参
	return 0;
}
