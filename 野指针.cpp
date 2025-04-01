/*************************************************************************
    > File Name: 野指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 11时32分21秒
 ************************************************************************/
#include<iostream>
using namespace std;


int main(){
	int num1=1;
	int num2=2;
	int *p1=&num1;
	int *p2=&num2;
	*p1=33;
	*p2=55;
	cout<<"num1=="<<num1<<endl;
	cout<<"num2=="<<num2<<endl;
	int *p=nullptr;//空指针
	p=&num2;
	*p=666;
	cout<<"p的值(地址)=="<<p<<endl;
	cout<<"p的解引用(num2的值)=="<<*p<<endl;
	cout<<"num2的值=="<<num2<<endl;
	return 0;
}
