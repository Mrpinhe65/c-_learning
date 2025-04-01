/*************************************************************************
    > File Name: 动态内存分配.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月29日 星期一 06时41分19秒
 ************************************************************************/
#include"public.hpp"
#include<stdlib.h>
/*
malloc      memory allocation       申请连续空间
calloc      contiguous allocation   申请连续空间+初始化
realloc     re-callocation          修改空间大小
free                                释放空间
*/

int main(){
	
	//开辟空间
	int* p=(int*)malloc(sizeof(int)*10); //10个int空间
	cout<<p<<endl;
	//赋值示例 指针或数组赋值的方式均可
	for(int i=0;i<10;i++){
		//*(p+1)=(i+1)*10;
		p[i]=(i+1)*10;//p[i]---->p+i
	}

	//遍历
	for(int i=0;i<10;i++){
		//cout<<*(p+i)<<endl;
		cout<<p[i]<<endl;

	}
	
	free(p);
	return 0;
}
