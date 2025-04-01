/*************************************************************************
    > File Name: 二元谓词.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月22日 星期一 06时51分18秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class SortRule{
	public:
		bool operator()(int val1,int val2){
			return val1>val2;
		}
};

void printVector(const vector<int>&v)
{
	for(vector<int>::const_iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
	for(auto it:v){
		cout<<it<<endl;
	}
}

void test01(){
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	sort(v.begin(),v.end());
	printVector(v);

	//使用函数对象，改变算法策略，变为排序规则从大到小
	sort(v.begin(),v.end(),SortRule()); //SortRule()匿名函数，也可以：SortRule sortRule;再将对象带入
	printVector(v);
}


int main(){
	test01();
	return 0;
}
