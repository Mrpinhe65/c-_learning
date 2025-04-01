/*************************************************************************
  > File Name: 常用拷贝和替换算法-swap.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 09时07分09秒
 ************************************************************************/
#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

/*
void printVector(int val){
	cout<<val<<" ";
}
*/

class printVector{
	public:
		void operator()(int val){
			cout<<val<<" ";
		}
};

void test(){

	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+100);
	}
	for_each(v1.begin(),v1.end(),printVector());
	cout<<endl;
	for_each(v2.begin(),v2.end(),printVector());
	cout<<endl;
	
	//swap互换
	cout<<"swap后=============================="<<endl;
	v1.swap(v2);
	for_each(v1.begin(),v1.end(),printVector());
	cout<<endl;
	for_each(v2.begin(),v2.end(),printVector());
	cout<<endl;
}

int main(){
	test();

	return 0;
}
