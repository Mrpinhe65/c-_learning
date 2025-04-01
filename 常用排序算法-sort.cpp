/*************************************************************************
    > File Name: 常用排序算法-sort.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 07时24分57秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

void printVector(vector<int>v){
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	//for 新式写法
	cout<<"for 的新式写法 for(auto num:v){} "<<endl;
	for(auto num:v){
		cout<<num<<" ";
	}
	cout<<endl;
}

void myPrint(int val){
	cout<<val<<" ";
}

bool compare(int val1,int val2){
	return val1>val2;
}

void test(){
	vector<int>v;
	v.push_back(50);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	printVector(v);
	//利用sort 升序排序--默认升序
	sort(v.begin(),v.end());
	cout<<"sort 升序排序后"<<endl;
	for_each(v.begin(),v.end(),myPrint);
	cout<<endl;
/*
	//按降序排序一
	sort(v.begin(),v.end(),greater<int>());
	for_each(v.begin(),v.end(),myPrint);
	cout<<endl;
*/

	//按降序排序二
	sort(v.begin(),v.end(),compare);
	for_each(v.begin(),v.end(),myPrint);
	cout<<endl;

/*
	//按sort默认升序后，用reverse反转三
	cout<<"按sort 默认升序后，reverse 反转即为降序"<<endl;
	reverse(v.begin(),v.end());
	for_each(v.begin(),v.end(),myPrint);
	cout<<endl;
*/
}

int main(){
	test();
	return 0;
}
