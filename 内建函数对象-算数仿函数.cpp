/*************************************************************************
    > File Name: 内建函数对象-算数仿函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月22日 星期一 07时10分19秒
 ************************************************************************/
#include<iostream>
#include<functional>
using namespace std;

//negate 一元仿函数 取反仿函数
void test01(){
	negate<int>n;
	cout<<n(50)<<endl;
}

//plus 二元仿函数 加法仿函数
void test02(){
	plus<int>p;
	cout<<p(10,20)<<endl;
}


int main(){
	test01();
	test02();
	return 0;
}
