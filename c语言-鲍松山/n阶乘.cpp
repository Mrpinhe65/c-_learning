/*************************************************************************
    > File Name: n阶乘.c
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月25日 星期六 23时23分33秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

/* 迭代法
size_t Fac(int n){
	size_t res=1;
	for(int i=1;i<=n;++i){
		res *= i;
	}
	return res;
}
*/

// 递归法
size_t Fac(int n){
	if(n==1)
		return 1;
	return n*Fac(n-1);
}

int main(){
	
	system("clear");
	
	int n=0;
	printf("输入计算阶乘的数字n：");
	scanf("%d",&n);
	printf("n!=%lu\n",Fac(n));
	return 0;
}
