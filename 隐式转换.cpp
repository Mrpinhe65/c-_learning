/*************************************************************************
    > File Name: 隐式转换.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月14日 星期日 18时06分55秒
 ************************************************************************/
#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

template<typename T>
T mySum(T a,T b){
	return a+b;
}

int main(){
	
	int a=10;
	int b=20;
	char c='c';
	
	cout<<sum(a,b)<<endl;
	cout<<sum(a,c)<<endl;//c隐式转换为ASCII码
	//cout<<mySum(a,c)<<endl;//函数模板自动类型推导，不能自动判定数据类型
	cout<<"函数模板mySum<int>="<<mySum<int>(a,c)<<endl;//模板函数显式，字符自动转换成整形。
	cout<<"函数模板mySum<char>="<<mySum<char>(a,c)<<endl;//模板函数显式，字符自动转换成整形。
	

	return 0;
}
