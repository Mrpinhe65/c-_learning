/*************************************************************************
    > File Name: p168-模板-函数模板基本语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月29日 星期四 20时22分10秒
 ************************************************************************/
#include"public.hpp"

template<typename T>//也可以写成：template<class T>
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
}

void test(){
	double a=10.1;
	double b=20.2;
	//隐式推导
	myswap(a,b);
	cout<<a<<endl;
	cout<<b<<endl;

	//显式指定类型
	int c=10;
	int d=20;
	myswap<int>(c,d); //显式指定类型
	cout<<c<<endl;
	cout<<d<<endl;
	double e=1.23;
	double f=3.14;
	myswap<double>(e,f); //显式指定类型
	cout<<e<<endl;
	cout<<f<<endl;
}
int main(){
	test();
	return 0;
}
