/*************************************************************************
    > File Name: 常用遍历算法-for_each.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月22日 星期一 08时31分26秒
 ************************************************************************/
#include<iostream>
#include<functional>
using namespace std;
#include<vector>

//普通函数
void printInfo(int val){
	cout<<val<<" ";
}

//仿函数
class PrintVector{
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
	//for_each 遍历
	//普通函数
	for_each(v.begin(),v.end(),printInfo);
	cout<<endl;
	//仿函数-类
	for_each(v.begin(),v.end(),PrintVector());
	cout<<endl;
}


int main(){

	test();
	
	return 0;
}
