/*************************************************************************
    > File Name: 容器list-反转和排序.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月19日 星期五 09时00分55秒
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

//配合排序用
bool myCompare(int v1,int v2){
	return v1>v2;
}

void test(){
	list<int>l1;
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(30);
	printList(l1);

	//反转
	l1.reverse();
	printList(l1);

	//排序
	l1.sort();//升序
	printList(l1);
	l1.sort(myCompare);//降序
	printList(l1);
	l1.reverse();
	printList(l1);
}

int main(){
	test();
	return 0;
}
