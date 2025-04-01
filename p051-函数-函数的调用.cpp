/*************************************************************************
    > File Name: p051-函数-函数的调用.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月03日 星期二 06时57分33秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int add(int num1,int num2){
	int sum=num1+num2;
	return sum;
}

int main(){
	int a=10;
	int b=20;
	int result=add(a,b);
	cout<<"两个整数相加的结果="<<result<<endl;
	return 0;
}
