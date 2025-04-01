/*************************************************************************
    > File Name: p186-STL初识-vector存放内置数据类型.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月31日 星期六 16时46分28秒
	
	容器：vector
	算法：for_each
	迭代器：vector<int>::iterator

 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void myprint(int val){
	cout<<val<<endl;
}

void test01(){
	vector<int> v;//创建 vector 容器
	//插入 int 数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin=v.begin();//起始迭代器，指向容器中第一个元素
	vector<int>::iterator itEnd=v.end();//结束迭代器，指向容器中最后一个元素的下一个位置
	
	/* 第一种遍历方式--不常用
	while(itBegin!=itEnd){
		cout<<*itBegin<<endl;
		itBegin++;
	}
	*/

	//第二种遍历方式--常用
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}

	//第三种遍历方式--STL algoritihm提供for_each遍历算法
	for_each(v.begin(),v.end(),myprint);
}

int main(){
	test01();
	return 0;
}
