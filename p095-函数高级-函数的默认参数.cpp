/*************************************************************************
    > File Name: p095-函数高级-函数的默认参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月11日 星期三 08时49分51秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//形参某个位置有默认参数，紧随其后的形参都需要有默认参数
void func(int a,int b,int c=10,int d=5){
	cout<<"a+b+c(默认)+d(默认)="<<a+b+c+d<<endl;

}

//如果函数声明有默认参数，函数实现形参列表就不能再给默认参数
int func1(int a=10,int b=20);//函数声明有默认参数

int func1(int a,int b){ //函数声明已经设定默认值，函数实现形参就不能给默认值了----函数声明和函数实现只能在其中一处设默认值
	return a+b;
}


int main(){
	int a=10;
	int b=20;
	int c=30;
	func(a,b);
	cout<<"函数声明和形参中默认参数值设定示例"<<func1(30,30)<<endl;

	return 0;
}
