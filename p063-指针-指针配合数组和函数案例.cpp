/*************************************************************************
    > File Name: p063-指针-指针配合数组和函数案例.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月05日 星期四 10时03分40秒

	1.创建数组
	2.创建函数，实现冒泡排序
	3.打印排序后的数组
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSortBySubscript(int *arr,int len){
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void bubbleSortByPoint(int *arr,int len){
	int *p_i=arr;
	for(int i=0;i<len-1;i++){
		int *p_j=arr;
			p_j=p_j+i+1;
		for(int j=i+1;j<len;j++){
			if(*p_i<*p_j){
				int temp=*p_i;
				*p_i=*p_j;
				*p_j=temp;
				//cout<<"*p_i="<<*p_i<<endl;
				//cout<<"*p_j="<<*p_j<<endl;
			}
			p_j++;
		}
		p_i++;
	}
	
}

int main(){
	system("clear");
	int arr[]={18,12,33,24,65,76,97,58,42,41,39,77,85,72,98,99};
	int len=sizeof(arr)/sizeof(arr[0]);
	cout<<"==================通过数组下标排序和通过数组下标打印================="<<endl;
	bubbleSortBySubscript(arr,len);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"==================通过数组指针排序和通过数组指针打印================="<<endl;
	bubbleSortByPoint(arr,len);
	int *p=arr;
	for(int i=0;i<len;i++){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	cout<<endl;
	return 0;
}
