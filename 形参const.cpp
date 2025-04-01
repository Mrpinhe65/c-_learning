/*************************************************************************
    > File Name: 形参const.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月07日 星期日 15时50分07秒
 ************************************************************************/
#include"iostream"
using namespace std;

struct student{
	int id;
	string name;
	int age;
	float score;
};

void printStudent(const student *stu){
	cout<<"在函数中使用const修饰形参，可保证在函数中不改变结构体原有数据"<<endl;
	//stu->score=87.9;
	cout<<"id="<<stu->id<<endl;
	cout<<"name="<<stu->name<<endl;
	cout<<"age="<<stu->age<<endl;
	cout<<"score="<<stu->score<<endl;
}

int main(){
	
	student stu={1003,"黄卫东",23,65.7};
	printStudent(&stu);
	cout<<"score="<<stu.score<<endl;

	return 0;
}
