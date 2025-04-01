/*************************************************************************
    > File Name: 二维数组指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月27日 星期六 10时45分43秒
 ************************************************************************/
#include<iostream>
using namespace std;


int main(){
	/*
	int arr1[5]={1,2,3,4,5};
	int arr2[7]={11,22,33,44,55,66,77};
	int arr3[9]={111,222,333,444,555,666,777,888,999};
	int* arr[3]={arr1,arr2,arr3};//arr1,arr2,arr3都是指针类型的数据
	int len1=sizeof(arr1)/sizeof(int);
	int len2=sizeof(arr2)/sizeof(int);
	int len3=sizeof(arr3)/sizeof(int);
	int len[]={len1,len2,len3};
	for(int i=0;i<3;i++){
		//int len_i=sizeof(arr[i])/sizeof(arr[i][0]);//arr[i]退化成内存地址，长度仅为8字节	
		for(int j=0;j<len[i];j++){
			cout<<arr[i][j]<<",";
		}
		cout<<endl;
	}
	*/

	//二维数组构造模式一:
	//二维数组一次构造，二维数组各元素地址是连续的
	int arr[3][5]={{1,2,3,4,5},{11,22,33,44,55},{111,222,333,444,555}};
	int(*p1)[5]=arr;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<*(*p1+j)<<" ";// *p1+j ---> 一维数组指针
		}
		cout<<endl;
		p1++; //p1 --->二维数组指针
	}

	//二维数组构造模式二：
	//分别构造一维数组，再构造二维数组，一维数组之间内存地址不连续
	int array1[5]={21,22,23,24,25};
	int array2[6]={311,322,333,344,355,366};
	int array3[9]={4111,4222,4333,4444,4555,5555,4777,4888,4999};
	int* array[3]={array1,array2,array3};//二维数组仅记录每个一维数组的指针
	int* * p2=array;
	int len[3]={5,6,9};
	for(int i=0;i<3;i++){
		for(int j=0;j<len[i];j++){
			cout<<*(*p2+j)<<" ";
		}
		cout<<endl;
		p2++;
	}

	return 0;
}
