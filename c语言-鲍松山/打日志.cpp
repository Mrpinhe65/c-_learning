/*************************************************************************
    > File Name: 打日志.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月26日 星期日 15时32分20秒
 ************************************************************************/
#include<stdio.h>

//打日志log
void log(const char *filename,size_t line,const char *msg){
	printf("[%s][%u]:%s\n",filename,line,msg);
}

#define LOG(msg) log(__FILE__,__LINE__,msg)

int main(){

	if(fp==NULL){
		log(__FILE__,__LINE__,"Open fail"); // 可用宏函数代替
		LOG("Open fail"); //宏函数
	}
	return 0;
}
