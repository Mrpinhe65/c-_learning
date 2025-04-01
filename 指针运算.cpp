/*************************************************************************
    > File Name: 指针运算.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 12时22分02秒
 ************************************************************************/
#include<iostream>
using namespace std;


int main(){
	
	double a=10.0;
	double *p=&a;
	cout<<"指针p=="<<p<<endl;
	p++;
	cout<<"指针p+1=="<<p<<endl;

	return 0;
}
