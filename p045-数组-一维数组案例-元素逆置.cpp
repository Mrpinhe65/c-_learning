/*************************************************************************
    > File Name: p044-数组-一维数组案例-五只小猪称体重.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月02日 星期一 09时52分35秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void test(){
	int arr[]={180,165,192,176,197};
	int len=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0];
	cout<<"原数组======================"<<endl;
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//求最大值
	for(int i=1;i<len;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"求最大值===================="<<endl;
	cout<<"Max=="<<max<<endl;
	
	//逆序
	cout<<"逆序========================"<<endl;
	int arr_reverse[len-1];
	int j=0;
	for(int i=len-1;i>=0;i--){
		arr_reverse[j]=arr[i];
		cout<<arr_reverse[j]<<" ";
		j++;
	}
	cout<<endl;

	//排序
	cout<<"排序========================"<<endl;
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	test();
	return 0;
}
