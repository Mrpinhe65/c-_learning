/*************************************************************************
    > File Name: 指针悬挂.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 17时23分16秒
 ************************************************************************/
#include<iostream>
using namespace std;


int main(){
	int *p1=new int;
	*p1=10;
	int *p2=p1;
	cout<<"*p1=="<<*p1<<endl;
	delete p1;
	cout<<"*p2=="<<*p2<<endl;
	cout<<"p2地址=="<<&p2<<endl;

	return 0;

}
