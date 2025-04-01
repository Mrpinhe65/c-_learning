/*************************************************************************
    > File Name: p046-数组-一维数组案例-冒泡排序.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月02日 星期一 10时30分13秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int arr[],int len);
void bubbleSort(int arr[],int len){
	cout<<"len"<<len<<endl;
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"排序后数组=============================="<<endl;
	printArr(arr,len);
}

void printArr(int arr[],int len){
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void test(){
	int arr[]={12,56,23,21,34,78,98,67,54,39,43,77};
	int len=sizeof(arr)/sizeof(arr[0]);
	cout<<"原数组=================================="<<endl;
	printArr(arr,len);
	bubbleSort(arr,len);
}

int main(){
	test();
	return 0;
}
