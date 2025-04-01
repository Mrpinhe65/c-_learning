/*************************************************************************
    > File Name: p106-类和对象-构造函数和析构函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月14日 星期六 09时12分25秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//构造函数负责初始化
//析构函数负责清理

class Person{
public:
	Person(){
		cout<<"构造函数空形参调用"<<endl;
	}
	Person(int id,string name){
		cout<<"构造函数有形参调用"<<endl;
		m_id=id;
		m_name=name;
		cout<<"m_id="<<m_id<<endl;
		cout<<"m_name="<<m_name<<endl;
		cout<<"构造函数执行完毕"<<endl;
	}
	~Person(){
		cout<<"析构函数调用"<<endl;
	}
	int m_id;
	string m_name;

};

void test(){
	Person p1(1001,"hwd");
}

int main(){
	test();
	cout<<"================="<<endl;
	Person p2;
	return 0;
}
