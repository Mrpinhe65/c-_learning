/*************************************************************************
    > File Name: p125运算符重载-关系运算符-全局函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 05时06分09秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		Person(string name,int age){
			this->Name=name;
			this->Age=age;
		}

		/*
		//重载 == 号
		bool operator==(Person & p){
			if(this->Name==p.Name && this->Age==p.Age){
				return true;
			}
			return false;
		}
		*/

		string Name;
		int Age;
};

//全局函数 重载 == 号
//重载 == 号
bool operator==(Person & p1,Person & p2){
	if(p1.Name==p2.Name && p1.Age==p2.Age){
		return true;
	}
	return false;
}

void test(){
	Person p1("Tom",21);
	Person p2("Tom",21);
	if(p1==p2){
		cout<<"p1 === p2"<<endl;
	}
	else
	{
		cout<<"p1 !== p2"<<endl;
	}
}

int main(){
	test();
	return 0;
}
