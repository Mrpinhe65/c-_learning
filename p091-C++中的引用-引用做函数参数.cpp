/*************************************************************************
    > File Name: p091-C++中的引用-引用做函数参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月10日 星期二 21时17分04秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void swap01(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	cout<<"swap01 a="<<a<<endl;
	cout<<"swap01 b="<<b<<endl;
}

void swap02(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<"swap02 *a="<<*a<<endl;
	cout<<"swap02 *b="<<*b<<endl;
}

void swap03(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
	cout<<"swap03 x="<<x<<endl;
	cout<<"swap03 y="<<y<<endl;
}

int main(){
	int a=10;
	int b=20;
	swap01(a,b);
	cout<<"main 01传值 a="<<a<<endl;
	cout<<"main 01传值 b="<<b<<endl;
	a=10;
	b=20;
	swap02(&a,&b);
	cout<<"main 02地址 a="<<a<<endl;
	cout<<"main 02地址 b="<<b<<endl;
	a=10;
	b=20;
	swap03(a,b);
	cout<<"main 03引用 a="<<a<<endl;
	cout<<"main 03引用 b="<<b<<endl;
	return 0;
}
