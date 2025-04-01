/*************************************************************************
    > File Name: func.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月07日 星期日 07时40分17秒
 ************************************************************************/
#include"head.h"

int sum(int a,int b){
	cout<<"函数sum"<<endl;
	return a+b;
}

void swap(int a,int b){
	cout<<"函数swap"<<endl;
	int temp=a;
	a=b;
	b=temp;
}
