/*************************************************************************
    > File Name: zhizhen.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2024年05月19日 星期日 10时06分55秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int a=5;
	printf("a的数值是：%d\n",a);
	printf("a的地址是：%p\n",&a);
	int * pa=&a;
	*pa=6;
	printf("a的值为：%d\n",a);
	printf("%ld\n",sizeof(int*));
	return 0;
}
