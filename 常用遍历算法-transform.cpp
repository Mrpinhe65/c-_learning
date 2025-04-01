/*************************************************************************
    > File Name: 常用遍历算法-transform.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月22日 星期一 09时39分30秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class PrintInfo{
	public:
		void operator()(int val){
			cout<<val<<" ";
		}
};

class TransForm{
	public:
		int operator()(int val){
			return val+100;
		}
};

void test(){
	vector<int>v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	vector<int>vTarget; //目标容器
	vTarget.resize(v.size()); //目标容器，要提前开辟空间，否则出现段错误
	
	transform(v.begin(),v.end(),vTarget.begin(),TransForm());
	
	for_each(vTarget.begin(),vTarget.end(),PrintInfo());
	cout<<endl;

	for(auto num:vTarget){
		cout<<num<<" ";
	}
	cout<<endl;
	
}

int main(){
	test();
	return 0;
}
