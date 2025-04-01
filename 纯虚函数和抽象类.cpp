/*************************************************************************
    > File Name: 纯虚函数和抽象类.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月12日 星期五 15时20分32秒
 ************************************************************************/
#include<iostream>
using namespace std;

class Base{
	public:
		//只要有一个纯虚函数，这个类就是抽象类
		//抽象类特点：
		//1.无法实例化对象
		//2.抽象类的子类，必须重写父类中的纯虚函数，否则也属于抽象类
		virtual void func()=0;//纯虚函数
};

class Son:public Base{
	public:
		virtual void func(){ //重写父类中的纯虚函数，格式为虚函数
			cout<<"func函数调用"<<endl;
		}
};

void test(){
	//Base b;//抽象类无法实例化对象
	//new Base;//抽象类无法实例化对象
	//Son s;//子类重写父类纯虚函数后，子类可以实例化对象
	Base *base=new Son;
	base->func();

}

int main(){
	test();

	return 0;
}
