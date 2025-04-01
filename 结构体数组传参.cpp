/*************************************************************************
    > File Name: 结构体传参.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月07日 星期日 12时22分52秒
 ************************************************************************/
#include"iostream"
using namespace std;

struct Student{
	string name;
	int age;
	float score;
};

struct Teacher{
	string name;
	int age;
	struct Student stu;
};


//函数接收地址（指针）
void printTeacher(struct Teacher *tch,int count){
	cout<<"结构体数组，在函数中的打印"<<endl;
	for(int i=0;i<count;i++){
		cout<<"================================="<<endl;
		cout<<"老师姓名："<<tch[i].name<<
			",老师年龄："<<tch[i].age<<
			",学生姓名："<<tch[i].stu.name<<
			"，学生年龄："<<tch[i].stu.age<<
			",学生成绩："<<tch[i].stu.score<<endl;
		cout<<"================================="<<endl;
	}
}

int main(){
	Teacher tch[]={{"王老师",52,"李小龙",21,89},{"李老师",48,"马云",23,67}};
	cout<<"结构体数组占用内存=="<<sizeof(tch)<<endl;
	int count=sizeof(tch)/sizeof(tch[0]);
	cout<<"结构体数组个数=="<<count<<endl;
	printTeacher(tch,count);//传地址（指针）
	//cout<<"老师姓名："<<tch.name<<",老师年龄："<<tch.age<<",学生姓名："<<tch.stu.name<<"，学生年龄："<<tch.stu.age<<",学生成绩："<<tch.stu.score<<endl;

	return 0;
}
