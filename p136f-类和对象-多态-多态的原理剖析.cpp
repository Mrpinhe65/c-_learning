/*************************************************************************
    > File Name: p136f-类和对象-多态-多态的原理剖析.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月22日 星期日 22时24分36秒
 ************************************************************************/
#include<iostream>
using namespace std;

//多态的原理剖析

class Animal
{
	public:
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
			cout<<"小猫咪咪叫"<<endl;
		}
};

class Dog:public Animal
{
	public:
		void speak()
		{
			cout<<"小狗汪汪叫"<<endl;
		}
};

void startSpeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	startSpeak(cat);
	cout<<"size of Animal="<<sizeof(Animal)<<endl;
}

int main()
{
	test01();
	return 0;
}
