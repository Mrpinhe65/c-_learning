/*************************************************************************
    > File Name: print_test.c
    > Author: 品赫先生
    > Mail: MRpinhe@hotmail.com 
    > Created Time: 2024年05月17日 星期五 09时25分42秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	char name[50];
	printf("请输入您的姓名:\n");
	scanf("%s",name);
	printf("你的姓名：%s，请核对确认\n",name);
	return 0;

}
