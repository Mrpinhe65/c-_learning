/*************************************************************************
    > File Name: src/pthread_race.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月23日 星期二 17时30分02秒
 ************************************************************************/
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

//定义线程运行函数
void* th_fn(void *arg){
	int distance=(int)arg;
	int i;
	for(i=0:i<=distance;i++){
		cout<<pthread_self()<<" run "<<i<<endl;
		int time=(int)(drand48()*100000);
		usleep(time); //微秒
	}
	return (void*)0;
}

int main(void){

	int err;
	pthread_t rabbit,turtle;//定义线程标识符
	
	// 创建rabbit线程
	if((err=pthread_create(&rabbit,NULL,th_fn,(void*)50))!=0){
		perror("pthread_create error");
	}
	// 创建turtle线程
	if((err=pthread_create(&turtle,NULL,th_fn,(void*)50))!=0){
		perror("pthread_create error");
	}
	cout<<"control thread id:"<<pthread_self()<<endl;
	cout<<"finished!"<<endl;

	return 0;
}
