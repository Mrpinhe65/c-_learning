/*************************************************************************
    > File Name: 多元素移除.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月05日 星期五 16时16分06秒
 ************************************************************************/
#include<iostream>
using namespace std;

/*
 * int *pArr=int[10]{3,5,1,11,99,66,22,2,8,6};
 * 移除下标0和下标5的两个元素---3，66
 */

int main(){
	int *pArr=new int[10]{3,5,1,11,99,66,22,2,8,6};
	int *pNewArr=new int[8];
	int offset=0;
	for(int i=0;i<10;i++)
	{
		if(i==0||i==5)
		{
			offset++;
			continue;
		}
		pNewArr[i-offset]=pArr[i];
		cout<<i<<","<<offset<<endl;
	}
	for(int i=0;i<8;i++)
	{
		cout<<"pNewArr["<<i<<"]="<<pNewArr[i]<<endl;
	}


	delete[] pArr;
	delete[] pNewArr;
}
