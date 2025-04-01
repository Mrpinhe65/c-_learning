/*************************************************************************
    > File Name: point_base.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2024年05月19日 星期日 15时32分24秒
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	int a=10;

	/* 
	 * 定义指针变量p1
	 * 指针指向一个整型变量
	 */
	int *p1=&a;
	
	/* 
	 * 定义一个指针p2，指向字符型变量
	 */
	char ch='c';
	char *p2=&ch;

	/* 定义一个单精度浮点指针和一个双精度浮点指针*/
	float *p3;
	double *p4;

	/* 指针变量占有的内存空间大小 */
	printf("p1=>size:%ld p2=>size:%ld\n",sizeof(p1),sizeof(p2));
	printf("p3>size:%ld p4=>size:%ld\n",sizeof(p3),sizeof(p4));
	printf("p1>:%p p2:%p\n",p1,p2);
	printf("p3>:%p p4:%p\n",p3,p4);

	/* 直接访问 */
	a=20;
	ch='B';
	printf("a--int=>%d ch--char=>%c\n",a,ch);

	/* 间接访问 */
	*p1=30;
	*p2='A';
	printf("访问*p1，得到：%d,访问*p2，得到：%c\n",*p1,*p2);

	return 0;
}
