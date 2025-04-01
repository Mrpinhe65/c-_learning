/*************************************************************************
    > File Name: p086-程序的内存模型-内存四区-栈区.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月10日 星期二 18时06分01秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//编译器自动分配和释放，存放函数的参数值、局部变量等
//注意：不要返回局部变量的地址到外部，栈区开辟的数据由编译器自动释放

//以下函数编译不通过，不能返回局部变量的地址
int * func(){
	int a=10;
	return &a;//错误，不能返回局部变量的地址
}

int main(){
	int * p=func();
	cout<<*p<<endl;
	return 0;
}
