/*************************************************************************
    > File Name: 容器set-multiset区别.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月19日 星期五 18时06分11秒
 ************************************************************************/
#include<iostream>
#include<set>
using namespace std;

void test(){
	set<int>s;
	
	pair<set<int>::iterator,bool>ret=s.insert(10);
	if(ret.second){
		cout<<"第一次插入数据insert(10)成功"<<endl;
	}
	else{
		cout<<"第一次插入数据insert(10)失败"<<endl;
	}
	ret=s.insert(10);
	if(ret.second){
		cout<<"第二次插入数据insert(10)成功"<<endl;
	}
	else{
		cout<<"第二次插入数据insert(10)失败"<<endl;
	}
}

int main(){

	test();
	return 0;
}
