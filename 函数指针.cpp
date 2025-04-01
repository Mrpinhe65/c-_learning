/*************************************************************************
    > File Name: 函数指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月28日 星期日 09时38分18秒
 ************************************************************************/
#include"public.hpp"

void method1();
int method2(int num1,int num2);

int main(){
	//普通函数调用
	method1();
	cout<<method2(5,6)<<endl;

	//定义指针指向函数
	void (*p1)()=method1;
	int (*p2)(int,int)=method2;
	
	//利用函数指针调用函数
	p1();//调用指针p1指向的函数 method1
	int rst=p2(10,35);//调用指针p2指向的函数 method2
	cout<<rst<<endl;
	
	return 0;
}

void method1(){
	cout<<"metnod1"<<endl;
}

int method2(int num1,int num2){
	cout<<"metnod2"<<endl;
	return num1+num2;
}
