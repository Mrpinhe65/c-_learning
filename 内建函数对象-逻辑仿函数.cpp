/*************************************************************************
    > File Name: 内建函数对象-逻辑仿函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月22日 星期一 07时43分09秒
 ************************************************************************/
#include<iostream>
#include<functional>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void test01(){
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	for(vector<bool>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	//利用逻辑非 logical_not 将容器 v 搬运到容器 v2 ，并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());
	transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
	for(vector<bool>::iterator it=v2.begin();it!=v2.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

}

int main(){
	test01();
	return 0;
}
