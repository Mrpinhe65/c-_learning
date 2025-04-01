/*************************************************************************
    > File Name: p092-C++中的引用-引用做函数返回值.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月10日 星期二 21时40分21秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//函数调用可以作为左值
int & test01(){
	static int a=10;//静态变量，存放在全局区，操作系统在程序结束时释放
	return a;
}

int main(){
	int &ref=test01();//函数返回
	cout<<"ref="<<ref<<endl;
	cout<<"ref="<<ref<<endl;
	test01()=1000;//如果函数返回值是引用，函数的调用可以作为左值
	cout<<"ref="<<ref<<endl;
	cout<<"ref="<<ref<<endl;
	return 0;
}
