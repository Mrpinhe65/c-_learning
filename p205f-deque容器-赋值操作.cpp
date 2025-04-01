/*
deque 赋值操作
*/

#include<iostream>
#include<deque>
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

	//operator= 赋值
	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	//assign 赋值
	deque<int>d3;
	d3.assign(d1.begin()+2,d1.end()-1);
	printDeque(d3);

	//assign 20个 1000
	deque<int>d4;
	d4.assign(20,1000);
	printDeque(d4);
}

int main()
{
	test01();
	return 0;
}
