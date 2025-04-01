/*************************************************************************
    > File Name: p071-结构体-结构体案例2.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月07日 星期六 16时53分20秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

struct hero{
	string name;
	int age;
	string gender;
};

void mySortByBubble(hero *sg,int len){
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(sg[i].age>sg[j].age){
				hero temp;
				temp=sg[i];
				sg[i]=sg[j];
				sg[j]=temp;
				/*
				string ts=sg[i].name;
				sg[i].name=sg[j].name;
				sg[j].name=ts;
				int ta=sg[i].age;
				sg[i].age=sg[j].age;
				sg[j].age=ta;
				string tc=sg[i].gender;
				sg[i].gender=sg[j].gender;
				sg[j].gender=tc;
				*/
			}
		}
	}
}

void printSg(hero *sg,int len){
	for(int i=0;i<len;i++){
		cout<<sg[i].name<<", "<<sg[i].age<<", "<<sg[i].gender<<endl;
	}
}

int main(){
	hero sg[]={
		{"刘备",46,"男"},
		{"张飞",42,"男"},
		{"关公",48,"男"},
		{"曹操",52,"男"},
		{"貂蝉",21,"女"},
		{"董卓",58,"男"},
		{"吕布",33,"男"},
		{"孙夫人",25,"女"},
		{"刘禅",26,"男"}
	};
	//int len=sizeof(sg)/sizeof(sg[0]); //词句与下句均可
	int len=sizeof(sg)/sizeof(hero);
	cout<<"==============排序前=============="<<endl;
	printSg(sg,len);
	mySortByBubble(sg,len);
	cout<<"==============排序后=============="<<endl;
	printSg(sg,len);
	return 0;
}
