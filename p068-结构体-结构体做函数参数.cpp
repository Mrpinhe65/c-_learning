/*************************************************************************
    > File Name: p068-结构体-结构体做函数参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月06日 星期五 19时26分51秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

struct student{
	string name;
	int age;
	int score;
};

//值传递
void printStruct(student s){
	cout<<"值传递的函数中： "<<s.name<<", "<<s.age<<", "<<s.score<<endl;
	s.name="黄卫东名字在传值函数中改变后,hwd 传值";
}
//地址传递，指针接受
void printStructByAdd(student *s){
	cout<<"地址传递指针接受的函数中： "<<s->name<<", "<<s->age<<", "<<s->score<<endl;
	s->name="黄卫东名字在函数中改变后,hwd传地址";
}

int main(){
	student stu={"黄卫东",59,100};
	printStruct(stu);
	cout<<"值传递到函数后，在函数中改变姓名，返回主函数后，姓名："<<stu.name<<endl;
	cout<<endl;
	printStructByAdd(&stu);
	cout<<"地址传递到函数后，在函数中改变姓名，返回主函数后，姓名："<<stu.name<<endl;
	cout<<endl;
	return 0;
}
