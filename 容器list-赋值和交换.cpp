/*************************************************************************
    > File Name: 容器list-赋值和交换.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 23时44分58秒
 ************************************************************************/
#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>&L){
	for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
	cout<<*it<<" ";
	}
	cout<<endl;
}

void test01(){
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int>L2;
	L2=L1;
	printList(L2);

	list<int>L3;
	L3.assign(L2.begin(),L2.end());
	printList(L2);

	list<int>L4;
	L4.assign(6,55);
	cout<<"交换================="<<endl;
	printList(L1);
	printList(L4);

	L1.swap(L4);
	cout<<"交换后================="<<endl;
	printList(L1);
	printList(L4);



}

int main(){
	test01();

	return 0;
}
