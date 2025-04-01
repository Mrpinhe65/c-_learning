/*************************************************************************
    > File Name: c_p4.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月20日 星期一 15时05分27秒
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>

// 整形数据类型位长
int main()
{
	// 变量初始化
	char ch='A';
	short s=10;
	int i=100;
	float f=12.34f;
	double d=23.45;

	printf("char=%ld\n",sizeof(char));
	printf("short=%ld\n",sizeof(short));
	printf("int=%ld\n",sizeof(int));
	printf("long=%ld\n",sizeof(long));
	printf("long long=%ld\n",sizeof(long long));

	// 浮点数数据类型位长
	printf("float=%ld\n",sizeof(float));
	printf("double=%ld\n",sizeof(double));
	// 布尔数据类型位长
	printf("bool=%ld\n",sizeof(bool));
	
	// 输出变量
	printf("ch=%c\n",ch);
	printf("s=%d\n",s);
	printf("i=%d\n",i);
	printf("f=%f\n",f);
	printf("d=%lf\n",d);
	return 0;
}
