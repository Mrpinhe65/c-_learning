/*************************************************************************
    > File Name: 容器stack-常用接口.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 18时07分07秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<stack>

void test01(){
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<"栈的大小=="<<s.size()<<endl;
	//只要栈不为空，查看栈顶，并且执行出栈操作
	while(!s.empty()){
		cout<<"栈顶元素为： "<<s.top()<<endl;
		s.pop();
	}
	cout<<"栈的大小=="<<s.size()<<endl;
}

int main(){
	test01();
	return 0;
}
