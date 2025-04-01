/*************************************************************************
    > File Name: p070-结构体-结构体案例1.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月06日 星期五 23时42分24秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

struct student{
	string name;
	int score;
};

struct teacher{
	string name;
	student s[5];
};

//void printInfo(teacher *t,student *s,int len_t,int len_s){
void printInfo(teacher t[],student s[],int len_t,int len_s){
	for(int i=0;i<len_t;i++){
		cout<<"教师姓名："<<t[i].name<<endl;
		for(int j=0;j<len_s;j++){
			cout<<"\t学生姓名： "<<t[i].s[j].name<<",  成绩："<<t[i].s[j].score<<endl;
		}
	}
}

int main(){
	//随机数种子,文件头<ctime>
	srand((unsigned int)time(NULL));

	teacher t[3];
	student s[5];
	int len_t=sizeof(t)/sizeof(t[0]);
	int len_s=sizeof(s)/sizeof(s[0]);
	string name_seed="ABCDE";	
	for(int i=0;i<len_t;i++){
		t[i].name="Teacher_";
		t[i].name+=name_seed[i];
		for(int j=0;j<len_s;j++){
			t[i].s[j].name="Student_";
			t[i].s[j].name+=name_seed[j];
			
			//随机数取分数,60~100分
			int random=rand()%41+60;
			t[i].s[j].score=random;
		}
	}
	printInfo(t,s,len_t,len_s);
	
	return 0;
}
