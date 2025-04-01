/*
deque 容器基本概念
双端数组，可以对头端进行插入操作
与vector 区别
	vector 头部插入删除效率低，数据量越大，效率越低
	deque 相对而言，对头部的插入删除速度比 vector 快
	vector 访问元素时的速度比deque 快
*/

#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void printDeque(const deque<int>&d)	//const 修饰
{
	//const_iterator 修饰
	for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for(int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//区间赋值
	deque<int>d2(d1.begin(),d1.end());
	printDeque(d2);

	//10个100
	deque<int>d3(10,100);
	printDeque(d3);

	//拷贝
	deque<int>d4(d3);
	printDeque(d4);

}
int main()
{
	test01();
	return 0;
}
