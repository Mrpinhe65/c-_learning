/*************************************************************************
    > File Name: 对组pair-创建.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月20日 星期六 06时58分58秒
 ************************************************************************/
#include<iostream>
using namespace std;

void test(){
	pair<string,int>p("Tom",21);
	cout<<"姓名："<<p.first<<", 年龄："<<p.second<<endl;

	pair<string,int>p2;
	p2=make_pair("Jerry",23);
	cout<<"姓名："<<p2.first<<", 年龄："<<p2.second<<endl;
}

int main(){
	test();
	return 0;
}
