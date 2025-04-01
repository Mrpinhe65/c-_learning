/*************************************************************************
    > File Name: swap.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2024年05月19日 星期日 21时05分07秒
 ************************************************************************/

#include<stdio.h>

int swap(int *v1,int *v2){
	int temp;

	printf("函数内，交换之前，v1地址=>%p,v2地址=>%p\n",v1,v2);
	temp=*v1;
	*v1=*v2;
	*v2=temp;
	printf("函数内，交换之后，v1地址=>%p,v2地址=>%p\n",v1,v2);
	printf("temp=>%d\n",temp);
	return 0;
}

int main(){
	int a,b;
	a=10;
	b=20;
	printf("调用swap之前，a=>%d,b=>%d\n",a,b);
	swap(&a,&b);

	printf("调用swap之后，a=>%d,b=>%d\n",a,b);
	return 0;

}

