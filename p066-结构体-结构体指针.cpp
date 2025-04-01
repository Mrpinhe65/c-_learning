/*************************************************************************
    > File Name: p066-结构体-结构体指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月06日 星期五 12时03分56秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

struct Student{
	string name;
	int age;
	int score;
};

int main(){
	Student s={"黄卫东",59,98};
	Student * p=&s;
	cout<<p->name<<" , "<<p->age<<" , "<<p->score<<endl;
	return 0;
}
