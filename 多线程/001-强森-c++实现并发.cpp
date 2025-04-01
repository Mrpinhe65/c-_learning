/*************************************************************************
    > File Name: 001-强森-c++实现并发.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月16日 星期三 08时47分20秒
 ************************************************************************/
#include<iostream>
#include<unistd.h> //sleep 需要的头函数----LINUX环境，WINDOWS环境下 #include<windlws>
#include<thread>
using namespace std;

void func1()
{
	int m = 0;
	while(1)
	{
		cout <<"==== In func1 " << m ++ << endl;
		sleep(0.01);
	}
}

void func2()
{
	int n = 0;
	while(0.01)
	{
		cout << "**** In func2 " << n ++ << endl;
		sleep(0.01);
	}
}

int main()
{
	//func1();
	//func2();
	//让 func1 func2 在线程中
	thread f1(func1);
	thread f2(func2);
	f1.join();
	f2.join();
	
	return 0;
}

