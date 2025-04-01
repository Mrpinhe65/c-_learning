/*************************************************************************
    > File Name: p02-陈子清-c++多线程编程-线程库的基本使用.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月15日 星期二 20时33分20秒

	线程头文件 thread
	创建子线程 thread thr;
	函数 func 在子线程中执行 thread thr(func,函数参数);
	主线程等待子线程结束 thr.join();
	主线程不等待子线程结束，子线程继续运行 thr.detach();
	判断子线程是否能调用 join() 或者 detach(), 其返回 bool 值： bool isJoin = thr.joinable();

 ************************************************************************/
#include<iostream>
#include<thread>
using namespace std;

void printHelloWorld(string msg)
{
	for(int i = 0; i < 1000000; i++)
	{
		cout<<i;
	}
	cout<<endl;
	cout<<msg<<endl;
	cout<<"子线程结束"<<endl;
}

int main()
{
	//创建线程
	thread thread1(printHelloWorld, "Hello Thread!");
	
	//判断子线程是否能调用 join() 或者 detach()
	bool isJoin = thread1.joinable();
	if(isJoin)
	{
		//主程序等待线程执行完毕
		//thread1.join();
		
		//主程序可以先结束，让线程在后台继续运行直至完成 detach 
		thread1.detach();
	}
	cout<<"主线程结束"<<endl;

	return 0;
}
