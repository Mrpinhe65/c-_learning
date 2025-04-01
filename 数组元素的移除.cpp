/*************************************************************************
    > File Name: 数组元素的移除.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 15时51分01秒
 ************************************************************************/
#include<iostream>
using namespace std;


int main(){
	
	int *pArr=new int[5]{1,3,5,7,9};

	for(int i=0;i<5;i++){
		cout<<"pArr["<<i<<"]="<<pArr[i]<<endl;
	}
	
	int *pNewArr=new int[4];
	
	for(int i=0;i<5;i++){
		if(i==2){
			continue;
		}
		if(i>2){
			pNewArr[i-1]=pArr[i];
		}
		else
		{
			pNewArr[i]=pArr[i];
		}
	}
	for(int i=0;i<4;i++){
		cout<<"pNewArr["<<i<<"]="<<pNewArr[i]<<endl;
	}
	delete[] pArr;
	delete[] pNewArr;

	return 0;
}
