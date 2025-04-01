/*************************************************************************
    > File Name: p085-程序的内存模型-内存四区-全局区.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月10日 星期二 17时28分14秒
 ************************************************************************/
/*
全局区----存放全局变量、静态变量、常量
该区数据在程序结束后由操作系统释放
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//全局变量、静态变量、常量
int g_a=10;
int g_b=20;

//const 修饰的全局变量
const int c_g_a=10;
const int c_g_b=20;

int main(){
	
	//创建普通局部变量
	int a=10;
	int b=20;

	//创建静态变量
	static int s_a=10;
	static int s_b=20;
	
	//常量--字符串常量
	//常量--const修饰的变量
	
	//const 修饰的局部变量
	const int c_l_a=10;
	const int c_l_b=20;
	


	//以下两个局部变量在内存中的地址比较接近
	cout<<"局部变量&a=  "<<&a<<endl;
	cout<<"局部变量&b=  "<<&b<<endl;
	
	//以下两个全局变量在内存中的地址比较接近,他们与局部变量的地址相差较大
	cout<<"全局变量&g_a="<<&g_a<<endl;
	cout<<"全局变量&g_b="<<&g_b<<endl;
	
	//以下两个静态变量在内存中的地址比较接近,他们与全局变量地址接近，与局部变量的地址相差较大
	cout<<"全局变量&s_a="<<&s_a<<endl;
	cout<<"全局变量&s_b="<<&s_b<<endl;

	//字符串常量的地址
	cout<<"字符串常量地址"<<&"我叫黄卫东"<<endl;
	
	//const修饰的变量
	cout<<"const全局变量&c_g_a="<<&c_g_a<<endl;
	cout<<"const全局变量&c_g_b="<<&c_g_b<<endl;

	cout<<"const局部变量&c_l_a  ="<<&c_l_a<<endl;
	cout<<"const局部变量&c_l_b  ="<<&c_l_b<<endl;
	
	return 0;
}
