/*************************************************************************
    > File Name: 容器list-大小操作.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月19日 星期五 01时38分07秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>&l){
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

void test(){
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);
	printList(l);
	cout<<l.size()<<endl;
	l.resize(10,1000);
	printList(l);
	l.resize(3);
	printList(l);
}

int main(){

	test();
	return 0;
}

