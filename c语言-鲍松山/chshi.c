/*************************************************************************
    > File Name: chshi.c
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月21日 星期二 15时53分38秒
 ************************************************************************/
#include<stdio.h>

int main()
{
	int val=0x11223344;
	
	char *pc=(char *)&val;
	printf("*pc=%x\n",*pc);
	printf("pc=%p\n",pc);

	short *ps=(short *)&val;
	printf("*ps=%x\n",*ps);
	printf("ps=%p\n",ps);

	int *pi=&val;
	printf("*pi=%x\n",*pi);
	printf("pi=%p\n",pi);

	return 0;
}
