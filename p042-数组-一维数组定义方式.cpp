/*************************************************************************
    > File Name: p42-数组-一维数组定义方式.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月01日 星期日 07时22分36秒

	数组放在一块连续的内存空间中
	数组中每个元素都是相同的数据类型

 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void test(){
	/*
	一维数组定义方式
	数据类型 数组名[数组长度];
	数据类型 数组名[数组长度]={值1,值2,值3,值4,值5i,...};
	数据类型 数组名[]={值1,值2,值3,值4,值5,...};
	 */
	int arr1[5];
	int arr2[5]={1,2,3,4,5};
	int arr3[]={1,2,3,4,5};

	arr1[0]=10;
	arr1[1]=20;
	arr1[2]=30;
	arr1[3]=40;
	arr1[4]=50;
	int len1=sizeof(arr1)/sizeof(int);
	cout<<"length="<<len1<<endl;
	for(int i=0;i<len1;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;

	int len3=sizeof(arr3)/sizeof(int);
	cout<<"length3="<<len3<<endl;
	for(int i=0;i<len3;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
}

int main(){
	test();
	return 0;
}
