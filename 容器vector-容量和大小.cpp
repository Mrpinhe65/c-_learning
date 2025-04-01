/*************************************************************************
    > File Name: 容器vector-容量和大小.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 18时41分25秒
 ************************************************************************/
/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printVector(vector<int>v){
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
上述内容写在printVector.hpp文件中
*/
#include"printVector.hpp"


void test01(){
	vector<int>v1;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	}
	printVector(v1);

	if(v1.empty()){
		cout<<"vector为空"<<endl;
	}else
	{
		cout<<"vector不为空"<<endl;
		cout<<"vector容量=="<<v1.capacity()<<endl;
		cout<<"vector大小=="<<v1.size()<<endl;
	}
	v1.resize(20,101);
	cout<<"resize后vector容量=="<<v1.capacity()<<endl;
	cout<<"resize后vector大小=="<<v1.size()<<endl;
	printVector(v1);

	v1.resize(45);
	cout<<"resize后vector容量=="<<v1.capacity()<<endl;
	cout<<"resize后vector大小=="<<v1.size()<<endl;
	printVector(v1);

}

int main(){

	test01();
	return 0;
}
