/*************************************************************************
    > File Name: p062-指针-指针和函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月04日 星期三 22时27分30秒

	值传递
	地址（指针）传递
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void swap1(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	cout<<endl;
	cout<<"值传递经函数交换后，在swap函数中形参改变了 a="<<a<<",b="<<b<<endl;
}

void swap2(int *a,int *b){
	cout<<"==========解引用交换=========="<<endl;
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<"值传递经函数交换后，在swap函数中形参改变了 *a="<<*a<<",*b="<<*b<<endl;
}

int main(){	
	system("clear");
	int a=10;
	int b=20;
	cout<<endl;
	cout<<"==================值传递==================="<<endl;
	cout<<"赋值后，主程序中 a="<<a<<",b="<<b<<endl;
	swap1(a,b);
	cout<<endl;
	cout<<"值传递经函数交换后，主程序main中实参 a="<<a<<",b="<<b<<endl;
	cout<<endl;
	cout<<"值传递到函数中，完成交换后，形参交换后，并没有使实参发生改变"<<endl;
	
	cout<<endl;
	cout<<"==================地址传递（指针传递）==================="<<endl;
	cout<<"赋值后，主程序中 a="<<a<<",b="<<b<<endl;
	cout<<endl;
	swap2(&a,&b);
	cout<<"值传递经函数交换指针指向的值后（解引用交换） a="<<a<<",b="<<b<<endl;
	cout<<endl;
	cout<<"地址传递到函数中，完成指针所指向的值交换使实参发生改变"<<endl;
	cout<<endl;
	
	return 0;
}
