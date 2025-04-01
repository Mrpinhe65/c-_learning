/*************************************************************************
    > File Name: array.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2024年05月19日 星期日 19时08分24秒
 ************************************************************************/

#include<stdio.h>

int main(){
/*
	int a[5]={1,2,3,4,5};
	int *p=a;
	++p;
	printf("*p:%d\n",*p);
	p++;
	printf("*p:%d\n",*p);
	--p;
	printf("*p:%d\n",*p);
	p--;
	printf("*p:%d\n",*p);

	p=a;
	p=p+4;
	printf("*p:%d\n",*p);
	p=p-2;
	printf("*p:%d\n",*p);
*/
	int a[10]={0};
	printf("array size=%ld\n",sizeof(a));
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	
	return 0;
}
