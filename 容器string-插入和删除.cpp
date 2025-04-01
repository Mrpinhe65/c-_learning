/*************************************************************************
    > File Name: 容器string-插入和删除.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 17时04分34秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<string>

void test01(){
	string str="hello";
	str.insert(1,"111");
	cout<<str<<endl;
	
	str.erase(4,2);
	cout<<str<<endl;
}

int main(){

	test01();

	return 0;
}
