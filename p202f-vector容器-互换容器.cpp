/*

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector<int>&v)
{
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for(int i = 6; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	//互换容器
	v1.swap(v2);
	cout << "互换容器后" << endl;
	printVector(v1);
	printVector(v2);

	//实际应用 巧用swap收缩内存空间
	vector<int>v;
	for(int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v 的容量 capacity = " << v.capacity() << endl;
	cout << "v 的大小     size = " << v.size() << endl;

	v.resize(3);
	cout << "v 的容量 capacity = " << v.capacity() << endl;
	cout << "v 的大小     size = " << v.size() << endl;

	//巧用 swap 收缩内存
	vector<int>(v).swap(v);	//vector<int>(v) 为匿名对象，交换后，大容量的匿名对象随即销毁
	cout << "v 的容量 capacity = " << v.capacity() << endl;
	cout << "v 的大小     size = " << v.size() << endl;
}

int main()
{
	test01();
	return 0;
}
