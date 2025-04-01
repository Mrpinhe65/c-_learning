/*************************************************************************
    > File Name: p121运算符重载-加号-全局函数.cpp
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
		string Name;
		int Age;
		int Score;
};

//加号+全局函数重载
Person operator+(Person&p1,Person&p2)
{
	Person temp(" ",0,0);
	temp.Name=p1.Name+p2.Name;
	temp.Age=p1.Age+p2.Age;
	temp.Score=p1.Score+p2.Score;
	return temp;
}

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
