/*************************************************************************
    > File Name: 宏.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月26日 星期日 15时18分31秒
 ************************************************************************/
#include<stdio.h>

int main(){

	printf("%s\n",__FILE__);
	printf("%d\n",__LINE__);
	printf("%s:%s\n",__DATE__,__TIME__);
	printf("%s\n",__TIMESTAMP__);
	printf("%s\n",__FUNCTION__);
	return 0;
}
