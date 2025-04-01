/*************************************************************************
    > File Name: const指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 17时39分38秒
 ************************************************************************/
#include<iostream>
using namespace std;


int main(){
	int num1=10,num2=20;
	//指向const的指针：const在*左边--->int const *p 或 const int *p
	const int *p=&num1;//num1为常量，不能通过*p修改num1的值
	p=&num2; //指针p可以指向其他地址,但*p依然不能修改
	cout<<*p<<endl;
	
	//const指针:const 在 * 右边
	int *const p1=&num2;//指针本身为常量不可改变（固定指向num2的地址），指向内存区域的数据可以改变,*p可以改变
	

	//
	return 0;
}
