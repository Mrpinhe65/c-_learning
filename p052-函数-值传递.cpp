/*************************************************************************
    > File Name: p052-函数-值传递.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月03日 星期二 07时16分19秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void swap(int a,int b){
	cout<<"===========交换前============"<<endl;
	cout<<"a="<<a<<", b="<<b<<endl;
	int temp=a;
	a=b;
	b=temp;
	cout<<"===========交换后============"<<endl;
	cout<<"a="<<a<<", b="<<b<<endl;
}

int main(){
	int a=10;
	int b=20;
	cout<<"===========实参============"<<endl;
	cout<<"a="<<a<<", b="<<b<<endl;
	swap(a,b);
	cout<<"===========主程序交换后============"<<endl;
	cout<<"a="<<a<<", b="<<b<<endl;

	return 0;
}
