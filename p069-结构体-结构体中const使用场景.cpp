/*************************************************************************
    > File Name: p069-结构体-结构体中const使用场景.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月06日 星期五 21时06分09秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

struct student{
	string name;
	int age;
	int score;
};

void printStructByValue(const student s){
	//s.age=9999;	
	cout<<"在值传递的函数中打印 "<<s.name<<", "<<s.age<<", "<<s.score<<endl;
}
void printStructByAdd(const student *s){
	//s->age=1000;
	cout<<"在地址指针传递的函数中打印 "<<s->name<<", "<<s->age<<", "<<s->score<<endl;
}

int main(){
	student stu={"const使用场景",59,98};
	printStructByValue(stu);
	printStructByAdd(&stu);
	cout<<"在main主函数中打印 "<<stu.name<<", "<<stu.age<<", "<<stu.score<<endl;
	return 0;
}
