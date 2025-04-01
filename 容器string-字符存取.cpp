/*************************************************************************
    > File Name: 容器string-字符存取.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 16时38分46秒
 ************************************************************************/
#include<iostream>
using namespace std;

void test01(){
	string str="hello world!";
	cout<<"str=="<<str<<endl;
	for(int i=0;i<str.size();i++){
		cout<<"str["<<i<<"]=="<<str.at(i)<<endl;
	}
	cout<<"字符串长度=="<<str.size()<<endl;
	
	cout<<"========================================="<<endl;
	for(int i=0;i<str.size();i++){
		cout<<"str.at("<<i<<")=="<<str.at(i)<<endl;
	}
	cout<<"字符串长度=="<<str.size()<<endl;

	str[3]='P';
	str.at(6)='W';
	cout<<"字符串=="<<str<<endl;
}

int main(){
	
	test01();

	return 0;
}
