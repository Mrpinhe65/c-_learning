/*************************************************************************
    > File Name: 加减乘除函数指针数组.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月28日 星期日 10时02分18秒
 ************************************************************************/
#include"public.hpp"

int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
int devide(int num1,int num2);

int main(){
	//定义加减乘除的指针数组
	//int (*p)(int,int)=add;//单个函数指针定义格式
	int (*p[4])(int,int)={add,subtract,multiply,devide};//函数指针数组 定义格式
	
	cout<<"请输入参与计算的两个数字："<<endl;
	int num1;
	int num2;
	int mode;
	cin>>num1>>num2;
	cout<<"请输入希望的计算模式[1]加法;[2]减法;[3]乘法;[4]除法;"<<endl;
	cin>>mode;
	int rst=p[mode-1](num1,num2);
	cout<<rst<<endl;

	return 0;
}

int add(int num1,int num2){
	return num1+num2;
}

int subtract(int num1,int num2){
	return num1-num2;
}

int multiply(int num1,int num2){
	return num1*num2;
}

int devide(int num1,int num2){
	if(num2!=0){
		return num1/num2;
	}
	cout<<"错误：分母为零"<<endl;
	return -1;
}
