/*************************************************************************
    > File Name: p093-C++中的引用-引用的本质.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月10日 星期二 21时59分53秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//引用的本质就是指针常量
void func(int& ref) //编译器发现引用，自动转换为 int* const ref=&a
{
	ref=100;//ref是引用，转换为 *ref=100;
}

int main(){
	int a=10;
	
	//自动转换为int* const ref=&a;指针常量是指针指向不可以改动，所以引用不可改
	int &ref=a;
	ref=20;//内部发现 ref 是引用，自动转换为 *ref=20;
	
	cout<<"  a="<<a<<endl;
	cout<<"ref="<<ref<<endl;

	func(a);
	cout<<"  a="<<a<<endl;
	cout<<"ref="<<ref<<endl;

	return 0;
}
