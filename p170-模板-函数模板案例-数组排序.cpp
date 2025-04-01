/*************************************************************************
    > File Name: p170-模板-函数模板案例-数组排序.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月30日 星期五 06时49分06秒
 ************************************************************************/
#include"public.hpp"

template<typename T>
void mySort(T array[],int len){
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(array[i]>array[j]){
				T temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
}

template<typename T>
void printArray(T array[],int len){
	for(int i=0;i<len;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void test(){
	char array[]="dkgbavzp";
	int len1=sizeof(array)/sizeof(char);
	mySort<char>(array,len1);
	printArray(array,len1);

	int arr[]={2,5,1,8,6,9,4,7,3};
	int len2=sizeof(arr)/sizeof(int);
	mySort<int>(arr,len2);
	printArray(arr,len2);
}

int main(){
	test();
	return 0;
}
