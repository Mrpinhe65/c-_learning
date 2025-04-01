/*
deque 数据存取
deque.at()
deque[]
deque.front()
deque.back()
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
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//通过 [] 方式访问元素
	//300 200 100 10 20 30
	for(int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	
	//通过 at() 方式访问元素
	//300 200 100 10 20 30
	for(int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "第1个元素   = " << d.front() << endl;
	cout << "最后1个元素 = " << d.back() << endl;
}

int main()
{
	test01();
	return 0;
}
