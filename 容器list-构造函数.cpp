/*************************************************************************
    > File Name: 容器list-构造函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 23时26分39秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<list>

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

	list<int>L2(L1.begin(),L1.end());
	printList(L2);

	list<int>L3(L2);
	printList(L3);

	list<int>L4(10,1000);
	printList(L4);
}

int main(){

	test01();

	return 0;
}
