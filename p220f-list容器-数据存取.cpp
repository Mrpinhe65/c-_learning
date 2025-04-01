/*
list 数据存取
front();
back();

list 双向循环链表，不支持下标 [] 取值和 .at() 取值
list 迭代器不支持随机访问
验证迭代器是否支持随机访问的方法
迭代器：list<int>::iterator it = L.begin();
it++ it-- //如果可以编译通过，则支持双向
it = it +1 //如果编译不通过的话，不支持随机访问
*/

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void printList(const list<int>&L)
{
	for(list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	
	
}

int main()
{
	test01();
	trturn 0;
}
