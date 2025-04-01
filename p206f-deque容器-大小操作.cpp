/*
deque.empty(); 是否为空
deque.size();  元素个数
deque.resize(num); 重新指定容器长度
deque.resize(num, elem);  
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

	if(d1.empty())
	{
		cout << "deque 容器为空" << endl;
	}
	else
	{
		cout << "deque 容器不为空" <<endl;
		cout << "deque 容器元素个数 = " << d1.size() << endl;
	}
	//重新指定容器长度（元素个数）
	d1.resize(20);
	printDeque(d1);

	//重新指定容器长度（元素个数），用elem填充
	d1.resize(30,11);
	printDeque(d1);
}

int main()
{
	test01();
	return 0;
}
