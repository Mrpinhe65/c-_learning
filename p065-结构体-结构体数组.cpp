/*************************************************************************
    > File Name: p065-结构体-结构体数组.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月06日 星期五 11时24分09秒
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
	Student stu[3]={
		{"黄卫东",59,100},
		{"李小龙",99,80},
		{"胡萝卜",24,88}
	};

	stu[2].name="甄子丹";
	stu[2].age=48;
	stu[2].score=78;
	cout<<"结构体字节数"<<sizeof(Student)<<endl;
	int len=sizeof(stu)/(sizeof(Student));
	for(int i=0;i<len;i++){
		cout<<"stu["<<i<<"].name="<<stu[i].name<<" ,";
		cout<<"stu["<<i<<"].age="<<stu[i].age<<" , ";
		cout<<"stu["<<i<<"].score="<<stu[i].score<<endl;
	}
	return 0;
}
