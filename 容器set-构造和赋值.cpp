/*************************************************************************
    > File Name: 容器set/multiset-构造和赋值.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月19日 星期五 14时36分04秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<set>
using namespace std;

void printSet(const set<int>&s){
	for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

void test(){
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printSet(s1);

	//拷贝构造
	set<int>s2(s1);
	printSet(s1);

	//赋值操作
	set<int>s3;
	s3=s1;
	printSet(s3);

	set<int>s4;
	s4.insert(11);
	s4.insert(22);
	s4.insert(33);
	s4.insert(44);
	s4.insert(55);
	s4.insert(66);
	printSet(s4);

	//size(),empty(),swap()
	cout<<"s4的大小"<<s4.size()<<endl;

	s1.swap(s4);
	printSet(s4);
}

int main(){
	test();
	return 0;
}
