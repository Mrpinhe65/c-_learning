/*************************************************************************
    > File Name: p057-指针-指针所占用内存空间.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月04日 星期三 08时16分12秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a=10;
	int *p;
	p=&a;
	cout<<"sizeof(p)       ="<<sizeof(p)<<endl;
	cout<<"sizeof(int *)   ="<<sizeof(int *)<<endl;
	cout<<"sizeof(char *)  ="<<sizeof(char *)<<endl;
	cout<<"sizeof(float *) ="<<sizeof(float *)<<endl;
	cout<<"sizeof(double *)="<<sizeof(double *)<<endl;
	return 0;
}
