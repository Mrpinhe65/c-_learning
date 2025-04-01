/*************************************************************************
    > File Name: p061-指针-指针和数组.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月04日 星期三 21时53分36秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cout<<endl;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	cout<<"数组第一个元素arr[0]="<<arr[0]<<endl;
	int * p=arr;//数组名就是数组的首地址
	cout<<"利用指针解引用取得数组首地址的值，即第一个元素的值,*p=      "<<*p<<endl;
	cout<<"利用指针解引用取得数组首地址的值，即第一个元素的地址,p=     "<<p<<endl;
	//数据类型int 4字节，p+1实际为p加上int的4字节,如果是double，则加8字节
	
	cout<<"利用指针解引用取得数组首地址+1的值，即第二个元素的地址,++p= "<<++p<<endl;
	cout<<"利用指针解引用取得数组首地址+1的值，即第二个元素的值,*p=    "<<*p<<endl;

	//利用指针遍历数组
	cout<<endl;
	cout<<"==========利用指针遍历数组元素==========="<<endl;
	int arr1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int * p1=arr1;
	for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){
		cout<<*p1<<" ";
		p1++;
	}
	cout<<endl;

	return 0;
}
