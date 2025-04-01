/*************************************************************************
    > File Name: p121运算符重载-加号-成员函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月23日 星期二 10时03分45秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		Person(string name,int age,int score){
			this->Name=name;
			this->Age=age;
			this->Score=score;
		}
		/*
		//类外成员函数声明
		Person operator+(Person&p); 
		*/

		Person operator+(Person&p) 
		{
			Person temp("",0,0);
			temp.Name=this->Name+p.Name;
			temp.Age=this->Age+p.Age;
			temp.Score=this->Score+p.Score;
			return temp;
		}
		string Name;
		int Age;
		int Score;
};

/* 类外成员函数
Person Person::operator+(Person&p) 
{
	Person temp("",0,0);
	temp.Name=this->Name+p.Name;
	temp.Age=this->Age+p.Age;
	temp.Score=this->Score+p.Score;
	return temp;
}
*/

void test(){
	Person p1("Tom",21,96);
	Person p2("John",23,98);
	cout<<p1.Name<<","<<p1.Age<<","<<p1.Score<<endl;
	cout<<p2.Name<<","<<p2.Age<<","<<p2.Score<<endl;
	Person p3=p1+p2;
	cout<<p3.Name<<","<<p3.Age<<","<<p3.Score<<endl;
}

int main(){
	test();
	return 0;
}
