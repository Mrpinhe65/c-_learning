/*************************************************************************
    > File Name: 动态多态.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 22时19分49秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Animal
{
	public:
		//虚函数--->virtual,地址晚绑定，实现动态多态
		virtual void speak(){
			cout<<"动物在叫"<<endl;
		}
};

class Cat:public Animal{
	public:
		void speak(){
			cout<<"小猫在咪咪叫"<<endl;
		}
};
class Dog:public Animal{
	public:
		void speak(){
			cout<<"小狗在汪汪叫"<<endl;
		}
};

void doSpeak(Animal &animal){

	animal.speak();
}

void test01(){
	
	Cat cat;
	doSpeak(cat);
	
	Dog dog;
	doSpeak(dog);

	Animal animal;
	doSpeak(animal);
}

int main(){
	test01();

	return 0;
}
