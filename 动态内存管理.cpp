/*************************************************************************
    > File Name: 动态内存管理.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 15时02分58秒
 ************************************************************************/
#include<iostream>
using namespace std;

/*
 * new 类型、new 类型[]
 * delete 指针、delete[] 指针
 */

int main(){
	
	int *p=new int;
	*p=666;
	cout<<"申请的int类型4字节内存地址            =="<<p<<endl;
	cout<<"申请的int类型4字节内存地址，存放的数据=="<<*p<<endl;
	delete p;
	int *parr=new int[5];
	parr[0]=100;
	parr[1]=2;
	*(parr+2)=3;
	*(parr+3)=444;
	parr[4]=5;
	cout<<"申请的int类型数组[5],内存地址(第一个元素parr[0])=="<<parr<<endl;
	cout<<"申请的int类型数组[5],内存地址(第2个元素parr[1]) =="<<(parr+1)<<endl;
	cout<<"数组第一个元素parr[0]=="<<*parr<<endl;
	cout<<"数组第二个元素parr[1]=="<<*(parr+1)<<endl;
	cout<<"数组第三个元素parr[2]=="<<*(parr+2)<<endl;
	cout<<"数组第四个元素parr[3]=="<<*(parr+3)<<endl;
	cout<<"数组第五个元素parr[4]=="<<*(parr+4)<<endl;

	delete[] parr;
	return 0;
}
