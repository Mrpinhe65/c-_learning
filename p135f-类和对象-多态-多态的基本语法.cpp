/*************************************************************************
    > File Name: p135f-类和对象-多态-多态的基本语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月22日 星期日 20时43分08秒
 ************************************************************************/
#include<iostream>
using namespace std;

//多态
//动态多态满足的条件
//1.有继承关系
//2.子类重写父类的虚函数
//
//动态多态使用
//父类的指针或者引用 指向子类对象

class Animal
{
	public:
		//虚函数，实现地址晚绑定
		virtual void speak()
		{
			cout<<"动物在说话"<<endl;
		}
};

class Cat:public Animal
{
	public:
		void speak()
		{
			cout<<"小猫在说话"<<endl;
		}
};

class Dog:public Animal
{
	public:
		void speak()
		{
			cout<<"小狗在说话"<<endl;
		}
};

//执行说话的函数
//地址早绑定，在编译阶段确定函数地址
//如果想执行让猫说话，这个函数地址不能早绑定，需要在运行阶段绑定----地址晚绑定
//在父类函数中，设定虚函数，实现地址晚绑定

//父类的指针或者引用 指向子类对象----Animal & animal ===>cat/dog
//传入什么对象，就掉用什么对象
void doSpeak(Animal & animal) // Animal &animal=cat/dog
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();
	return 0;
}
