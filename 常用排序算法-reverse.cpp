/*************************************************************************
    > File Name: 常用排序算法-reserse.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 08时11分12秒
 ************************************************************************/
#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

void printVector(int val){
	cout<<val<<" ";
}

void test(){
	vector<int>v;
	for(int i=0;i<30;i++){
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),printVector);
	cout<<endl;
	cout<<"reverse======================"<<endl;

	reverse(v.begin(),v.end());
	
	for_each(v.begin(),v.end(),printVector);
	cout<<endl;
}

int main(){
	test();
	return 0;
}
