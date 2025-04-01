/*************************************************************************
    > File Name: p03-陈子清-c++多线程编码-线程函数中的数据未定义错误-智能指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月16日 星期三 07时55分38秒
 ************************************************************************/
#include<iostream>
#include<thread>
#include<memory>
using namespace std;

class A
{
	public:
		void foo()
		{
			cout<<"thread in class A"<<endl;
		}
}

int main()
{
	A a;
	thread t(a.foo);
	t.join();
	return 0;
}
		

		
