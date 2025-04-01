/*************************************************************************
    > File Name: 常用拷贝和替换算法-replace.cpp
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

	vector<int>v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),printVector());
	cout<<endl;

	replace(v.begin(),v.end(),6,666);
	for_each(v.begin(),v.end(),printVector());
	cout<<endl;
}

int main(){
	test();

	return 0;

}
