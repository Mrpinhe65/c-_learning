/*************************************************************************
    > File Name: 递归.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月25日 星期六 19时58分43秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t my_strlen(const char *string)
{
	if(*string=='\0')
		return 0;
	return 1+my_strlen(string+1);
}

int main()
{

	char *str1="Hello C";
	int len=my_strlen(str1);
	printf("len=%d\n",len);
	return 0;
}
