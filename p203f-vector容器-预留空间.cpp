/*
vector 预留空间
reserve(int len); //容器预留 len 个元素长度，
					预留位置不初始化，元素不可以访问

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void test01()
{
	int num = 0;
	int * p = nullptr;
	vector<int>v;

	//利用reserve 预留空间
	v.reserve(100500);

	for(int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if(p != &v[0])	//vector 数据第0个的内存地址如果改变了
						//就是重新开辟新的vector内存空间--扩容
						//地址改变 1 次，计数加 1
		{
			num++;
			p = &v[0];
			cout << "内存地址 p = " << p << endl;
		}
	}
	cout << "vector 开辟了: " << num << " 次" << endl;
}

int main()
{
	test01();
	return 0;
}
