/*
vector 容器-数据存取
at()
[]
front()
back()
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector<int>&v)
{
	for(vector<int>::iterator it = v.begin(); it != v.end(); it ++)
	{
		cout << *it << endl;
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for(int i =0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//利用 [] 方式访问元素
	for(int i =0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用 at() 方式访问元素
	for(int i =0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
 
	//获取第一个元素
	cout << "第一个元素 = " << v1.front() << endl;

	//获取最后一个元素
	cout << "最后一个元素 = " << v1.back() << endl;
}

int main()
{
	test01();
	return 0;
}

