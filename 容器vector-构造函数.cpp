/*************************************************************************
    > File Name: 容器vector-构造函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 17时31分49秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printVector(vector<int>&v){
	for(auto num:v){
		cout<<"auto num :v=="<<num<<" ";
	}
	cout<<endl;

	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

void test01(){
	//默认构造，无参构造
	vector<int>v1;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	}
	printVector(v1);
	
	//通过区间方式构造
	vector<int>v2(v1.begin(),v1.end());
	printVector(v2);

	//n个elem方式构造
	vector<int>v3(20,145);
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}

int main(){

	test01();
	return 0;
}
