/*************************************************************************
    > File Name: 函数模板.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月14日 星期日 10时19分16秒
 ************************************************************************/
#include<iostream>
using namespace std;

void swapInt(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void swapFloat(float &a,float &b){
	float temp=a;
	a=b;
	b=temp;
}

//函数模板
template<typename T> //声明一个模板，T是通用数据类型
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
}

void test01(){
	int a=10;
	int b=20;
	/*
	swapInt(a,b);
	*/
	//利用函数模板交换
	//1.自动类型推导
	//myswap(a,b);
	//2.显式指定类型
	myswap<int>(a,b);
	cout<<"a=="<<a<<" , b=="<<b<<endl;
	float c=3.14;
	float d=6.18;
	/*
	swapFloat(c,d);
	*/
	//1.自动类型推导
	/* A:
	myswap(c,d);
	A */
	//2.显式指定类型
	/* B */ 
	myswap<float>(c,d);
	
	cout<<"c=="<<c<<" , d=="<<d<<endl;
		
}

int main(){

	test01();

	return 0;
}
