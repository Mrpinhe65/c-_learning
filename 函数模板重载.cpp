/*************************************************************************
    > File Name: 模板重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月15日 星期一 01时05分19秒
 ************************************************************************/
#include<iostream>
using namespace std;

class Person{
public:
	Person(string name,int age){
		this->m_Name=name;
		this->m_Age=age;
	}
	string m_Name;
	int m_Age;
};

template<class T>
bool myCompare(T &a,T &b){
	if(a==b){
		return true;
	}
	return false;
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person &p1,Person &p2){
	cout<<p1.m_Name<<",p1.m_Age"<<p1.m_Age<<endl;
	cout<<p2.m_Name<<",p2.m_Age"<<p2.m_Age<<endl;
	if(p1.m_Name==p2.m_Name && p1.m_Age==p2.m_Age){
		return true;
	}
	return false;
}

/*
int test01(){
	int a=10;
	int b=20;
	if(myCompare(a,b)){
		cout<<"a和b的比较结果==相等"<<endl;
		return 0;
	}
	cout<<"a和b的比较结果==不相等"<<endl;
	return 0;
}
*/

int test02(){
	Person p1("Tom",10);
	Person p2("Tom",12);
	bool ret=myCompare(p1,p2);
	if(ret){
		cout<<"a和b的比较结果==相等"<<endl;
		return 0;
	}
	cout<<"a和b的比较结果==不相等"<<endl;
	return 0;

}

int main(){

	//test01();
	test02();

	return 0;
}
