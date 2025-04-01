/*************************************************************************
    > File Name: sum.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月26日 星期日 10时51分11秒
 ************************************************************************/
#include<stdio.h>
// 数字累加递归法
int Sum1(int c){
	if(c==1){
		return 1;
	}
	return c+Sum1(c-1);
}

int main(){
	printf("input n: ");
	int n=0;
	scanf("%d",&n);
	int res=Sum1(n);
	printf("res=%d\n",res);
	return 0;
}
