/*************************************************************************
  > File Name: 常用拷贝和替换算法-replace_if.cpp
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

//谓词
//类的方式
class greaterNum{
	public:
	bool operator()(int val){
		return val>=6;
	}
};

/* 谓词 伪函数方式
bool greaterNum(int val){
	return val>=6;
}
*/

void test(){

	vector<int>v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),printVector());
	cout<<endl;
	
	//大于等于6的，替换成3000 类的方式greaterNum() , 伪函数的方式 greaterNum----不带括号
	replace_if(v.begin(),v.end(),greaterNum(),3000);
	for_each(v.begin(),v.end(),printVector());
	cout<<endl;
}

int main(){
	test();

	return 0;

}
