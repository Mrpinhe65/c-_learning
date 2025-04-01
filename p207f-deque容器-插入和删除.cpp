/*
deque 插入和删除
两端的操作
push_front()
push_back()
pop_front()
pop_back()

指定位置(迭代器)的操作
insert(pos, elem)
insert(pos, n, elem)
insert(pos, begin(), end())
clear()
erase(begin(), end())
erase(pos)
*/

#include<iostream>
#include<deque>
using namespace std;

void printDeque(const deque<int>d)
{
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
	
	//头插 -11
	d1.push_front(-11);
	//尾插 11
	d1.push_back(11);
	printDeque(d1);

	//头删第一个元素
	d1.pop_front();
	//尾删最后一个元素
	d1.pop_back();
	printDeque(d1);
	//指定位置操作
	d1.insert(d1.begin() + 2, 222);	//第2位置插入222
	printDeque(d1);

	d1.insert(d1.begin() +5, 2, 55); //第5位置插入2个55
	printDeque(d1);

	//在指定位置将另一个容器的区间插入
	deque<int>d2;
	d2.push_back(11);
	d2.push_back(22);
	d2.push_back(33);
	d2.push_back(44);
	d2.push_back(55);
	printDeque(d2);

	d1.insert(d1.begin() + 7, d2.begin() + 1, d2.begin() + 4);
	printDeque(d1);

	//删除 erase
	d1.erase(d1.begin() + 4);	//删除第4位置的元素
	printDeque(d1);

	//删除区间数据
	d1.erase(d1.begin() + 6, d1.end() - 3);
	printDeque(d1);
}

int main()
{
	test01();
	return 0;
}
