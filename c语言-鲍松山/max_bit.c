/*************************************************************************
    > File Name: max_bit.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2024年05月18日 星期六 15时41分51秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int a=0,b=0;
	while (++a>0);
	printf("数据a的值是：%d\n",a);
	printf("int数据类型最大数是：a-1=%d\n",a-1);
	b++;
	while((a=a/10)!=0)
	{
		b++;
	}
	printf("int数据类型最大的数位是：%d\n",b);
	return 0;
}
