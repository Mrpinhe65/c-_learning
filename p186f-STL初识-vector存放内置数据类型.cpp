/************************************
容器 vector 可以理解为数组
算法 for_each
迭代器 vector<int>::iterator
*************************************/
#include<iostream>
#include<vector>	// vector 头文件
#include<algorithm> // 各种算法头文件
using namespace std;

void myPrint(int val)	//配合for_each 使用
{
	cout << val << endl;
}
void test01()
{
	//创建一个 vector 容器 数组
	vector<int> v;

	//向容器中出入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//通过迭代器访问容器中的数据 作用域 vector<int> 数据类型 iterator 
	vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向容器中第一个数据
	vector<int>::iterator itEnd = v.end();	   //结束迭代器 指向容器中最后一个元素的下一个位置
	
	//第一种遍历方式
	while(itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin ++;
	}

	//第二种遍历方式
	for(vector<int>::iterator it = v.begin(); it != v.end(); it ++)
	{
		cout << *it << endl;
	}

	//第三种遍历方式
	//使用STL提供的算法for_each
	for_each(v.begin(),v.end(),myPrint);
}

int main()
{
	test01();
	return 0;
}
