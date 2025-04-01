/*************************************************************************
    > File Name: 容器list-数据存取.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月19日 星期五 08时41分16秒
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

	cout<<"第一个元素front()=="<<l.front()<<endl;
	cout<<"最后一个元素back()=="<<l.back()<<endl;

	//验证迭代器是否支持随机访问
	list<int>::iterator it=l.begin();
	it++;//支持双向
	it--;//支持双向
	
	/*
	it=it+1;//出错则不支持随机访问
	*/
	}

int main(){
	test();
	return 0;
}
