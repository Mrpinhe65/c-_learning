/*************************************************************************
    > File Name: 容器set/multiset-插入和删除.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月19日 星期五 14时36分04秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<set>
using namespace std;

void printSet(const multiset<int>&s){
	for(multiset<int>::const_iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

void test(){
	multiset<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	printSet(s1);

	multiset<int>::iterator pos=s1.find(40);
	cout<<*pos<<endl;
	pos=s1.find(60);
	cout<<*pos<<endl;

	int num=s1.count(30);
	cout<<num<<endl;
}

int main(){
	test();
	return 0;
}
