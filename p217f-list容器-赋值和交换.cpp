/*
 * list 容器-基本概念
 * 双向循环链式存储--数据域、两个指针域--prev next
 *链表需要动态开辟非连续内存空间，每一个结点通过前趋指针和后驱指针与前结点后结点相连
 *详看数据结构链表部分
 *list优点：
 *	动态内存分配，不会造成内存浪费和溢出
 *	插入和删除操作方便，修改指针即可，不需要移动大量元素
 *
 * list缺点：
 *	存储密度低，遍历额外耗费大
 *  
 */

/*
 * 赋值和交换
 * assign(iterator begin(), iterator end());
 * assign(num, elem);
 *list<int> L2 = L1 
 * swap(list);
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
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	// =  赋值
	cout << "L2 = L1 " << endl;
	list<int>L2;
	L2 = L1;
	printList(L2);

	//assign 赋值
	cout << "L3.assign(L1.beg, L1.end) " << endl;
	list<int>L3;
	L3.assign(L1.begin(), L1.end());
	printList(L3);

	//assign 10 个 100
	cout << "L4.assign(10,100)" << endl;
	list<int>L4;
	L4.assign(10,100);
	printList(L4);

	//swap 交换
	cout << "L4 和 L1 交换 L4= " << endl;
	L4.swap(L1);
	printList(L4);
}

int main()
{
	test01();
	return 0;
}
