/*************************************************************************
    > File Name: hm-p142结构体作为函数参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月28日 星期日 16时49分48秒
 ************************************************************************/
#include"public.hpp"


typedef struct Student{
	string name;
	int age;
}ST;

void changStu(ST& p);

int main(){
	ST stu={"huangweidogn",59};
	changStu(stu);
	cout<<"In Main"<<endl;
	cout<<stu.name<<","<<stu.age<<endl;

	return 0;
}

void changStu(ST& p){
	p.name="aaa";
	p.age=21;
	cout<<"In Function"<<endl;
	cout<<p.name<<","<<p.age<<endl;
}
