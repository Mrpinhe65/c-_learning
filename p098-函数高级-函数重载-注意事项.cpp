/*************************************************************************
    > File Name: p098-函数高级-函数重载-注意事项.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月11日 星期三 16时35分17秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//引用作为重载的条件
void func(int &a){
	cout<<"func(int &a)调用"<<endl;
}

void func(const int &a){
	cout<<"func(const int &a)调用"<<endl;
}

//函数重载碰到默认参数,C++11不允许，所以函数重载避免设默认参数

void func2(int a){
	cout<<"func2(int a)调用=="<<a<<endl;
}

void func2(int a,int b){
	cout<<"func2(int a,int b)调用 a=="<<a<<", b=="<<b<<endl;
}

int main(){

	int a=10;
	func(a);//a是变量，所以调用第一个函数，普通引用 int &a
	
	func(10);//10是常量，所以调用常量引用--const int &a

	func2(6);
	func2(6,8);//实参和形参一一对应，避免二义性
	return 0;
}
