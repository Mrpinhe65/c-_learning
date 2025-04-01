/*************************************************************************
    > File Name: p048-数组-二维数组-数组名.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月02日 星期一 20时43分41秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void test(){
	int arr[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"数组占用内存空间="<<sizeof(arr)<<endl;
	cout<<"数组第一行占用的内存空间="<<sizeof(arr[0])<<endl;
	cout<<"数组行每个元素占用的内存空间="<<sizeof(arr[0][0])<<endl;
	cout<<"数组行数="<<sizeof(arr)/sizeof(arr[0])<<endl;
	cout<<"数组列数="<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;

	cout<<"二维数组的首地址"<<arr<<endl;
	cout<<"二维数组的第一个元素的地址"<<&arr[0][0]<<endl;
	cout<<"二维数组的第二个元素的地址"<<&arr[0][1]<<endl;
	
	cout<<"二维数组的第一行的首地址"<<&arr[0]<<endl;
	cout<<"二维数组的第一行的第一个元素地址"<<&arr[0][0]<<endl;
	
	cout<<"二维数组的第二行的首地址"<<&arr[1]<<endl;
	cout<<"二维数组的第二行的第一个元素地址"<<&arr[1][0]<<endl;

	cout<<"二维数组的第三行的首地址"<<&arr[2]<<endl;
	cout<<"二维数组的第三行的第一个元素地址"<<&arr[2][1]<<endl;

	cout<<"========十六进制和十进制转换========"<<endl;
	int *ptr=&arr[2][1];
	uintptr_t addr_decimal=reinterpret_cast<uintptr_t>(ptr);
	cout<<"地址（十六进制）="<<ptr<<endl;
	cout<<"地址（十进制）  ="<<addr_decimal<<endl;
}

int main(){
	test();
	return 0;
}
