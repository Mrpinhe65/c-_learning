/*
vector 容量和大小
v.empty();		判断是否为空
v.capacity();	返回容器容量----容量一般都比元素个数大
v.size();		返回元素个数
v.resize(len,num); 重新指定大小
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
	//
	vector<int>v1;
	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if(v1.empty())
	{
		cout << "v1 为空" << endl;
	}
	else
	{
		cout << "v1 不为空" << endl;
		cout << "v1 容量 = " << v1.capacity() << endl;	//vector 开辟的空间
		cout << "v1 的大小 = " << v1.size() << endl;	//存储的数据数量
		cout << v1.end() - v1.begin() <<endl;
	}

	//重新设定vector容量
	v1.resize(20, 100);	//默认填充值 0，利用重载，可以指定默认填充值--参数2
	printVector(v1); //如果重新指定的比原来的长，默认用 0 填充，也可以加参数2，指定填充值

	v1.resize(5);	//如果重新指定的比原来的小，多出的数据将会被删除
	printVector(v1);
}

int main()
{
	test01();
	return 0;
}
