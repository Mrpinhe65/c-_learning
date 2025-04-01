/*************************************************************************
    > File Name: 容器string-字符串比较.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 15时25分15秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<string>

void test01(){
	string str1="aello";
	string str2="hello";
	if(str1.compare(str2)==0){
		cout<<"str1==str2"<<endl;
	}
	else if(str1.compare(str2)>0){
		cout<<"str1大于str2"<<endl;
	}else
	{
		cout<<"str1小于str2"<<endl;
	}
}

int main(){

	test01();

	return 0;
}
