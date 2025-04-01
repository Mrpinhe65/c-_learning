/*************************************************************************
    > File Name: struct.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年06月29日 星期六 15时07分52秒
 ************************************************************************/
#include<stdio.h>

typedef struct Birthday{
	int year; //年
	int month; //月
	int day; //日
}Birthday;

typedef struct Student{
	int id; //学号
	char name[10]; //姓名
	int	age; //年龄
	float score; //成绩
	Birthday birthday; //生日		
}Student;

void fun_struct(Student stu){ //结构体形参
	
	printf("结构体传参\n学号=%d,姓名=%s,年龄=%d,成绩%.2f,生日年=%d,生日月=%d,生日=%d\n",
			stu.id,stu.name,stu.age,stu.score,stu.birthday.year,stu.birthday.month,stu.birthday.day);

}

void fun_point(Student *p){ //指针传参

	printf("指针传参\n学号=%d,姓名=%s,年龄=%d,成绩%.2f,生日年=%d,生日月=%d,生日=%d\n",
			p->id,p->name,p->age,p->score,p->birthday.year,p->birthday.month,p->birthday.day); //p-> 指向
}
int main(){
	
	Student stu={1001,"黄卫东",59,96,{1965,11,11}}; //结构体变量及初始化

	printf("结构体stu的长度= %ld\n",sizeof(stu));
	fun_struct(stu); //结构体传参
	fun_point(&stu); //指针(地址)传参
	//printf("%d,%s,%d,%f,%d,%d,%d\n",stu.id,stu.name,stu.age,stu.score,stu.birthday.year,stu.birthday.month,stu.birthday.day);

	return 0;
}
