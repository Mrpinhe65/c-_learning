/*************************************************************************
    > File Name: 元素逆置二.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月06日 星期六 15时33分16秒
 ************************************************************************/
#include<iostream>
using namespace std;

int main(){
	int arr[]={1,6,8,9,12,32,4,77,21,0};
	int arr_len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<arr_len;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
	int arr_start=0;
	int arr_end=arr_len-1;
	int temp;
	for(int i=0;i<arr_len;i++){
		if(arr_start<arr_end){
			temp=arr[arr_start];
			arr[arr_start]=arr[arr_end];
			arr[arr_end]=temp;
		}
		arr_start++;
		arr_end--;
	}
	for(int i=0;i<arr_len;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
	return 0;
}
