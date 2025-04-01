/*************************************************************************
    > File Name: test-运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月03日 星期六 16时08分30秒
 ************************************************************************/
#include"public.hpp"

typedef struct Student{
	int age;
	float score;
}stu;

stu operator+(stu &s1,stu &s2){
	stu s;
	s.age=(s1.age+s2.age)/2;
	s.score=(s1.score+s2.score)/2;
	return s;
}

int main(){
	stu s1;
	s1.age=20;
	s1.score=90;
	stu s2;
	s2.age=30;
	s2.score=98;
	stu s3;
	s3=s1+s2;
	cout<<s3.age<<","<<s3.score<<endl;
	
	return 0;
}
