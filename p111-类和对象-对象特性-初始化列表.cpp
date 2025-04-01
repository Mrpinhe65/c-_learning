/*************************************************************************
    > File Name: p111-类和对象-对象特性-初始化列表.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月16日 星期一 08时30分16秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Person{
	public:
		/*
		//传统方式的初始化
		Person(int a,int b,int c){
			m_A=a;
			m_B=b;
			m_C=c;
		}
		*/

		//初始化对象列表
		Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){

		}
		
		int m_A;
		int m_B;
		int m_C;
};

void test01(){
	Person p(10,20,30);
	//Person p;
	cout<<"m_A="<<p.m_A<<", m_B="<<p.m_B<<", m_C="<<p.m_C<<endl;

}

int main(){
	test01();
	return 0;
}
