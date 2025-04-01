/*************************************************************************
    > File Name: 虚析构和纯虚析构.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月13日 星期六 16时39分18秒
 ************************************************************************/
#include<iostream>
using namespace std;

class Animal{
	public:
		Animal(){
			cout<<"Animal构造函数调用"<<endl;
		}
		
		//父类析构改成虚析构
		//父类虚析构，就可以让子类虚析构运行
		//如果父类不是虚析构，子类虚析构不会运行
		/* A: */
		virtual ~Animal(){
			cout<<"Animal析构函数调用--类内"<<endl;
		}
		/* A: */
				
		//纯虚析构也可解决，需要在类外添加指定作用域的函数如下行：
		//Animal::~Animal(){cout<<"类外纯虚析构函数调用"<<endl; }
		//配合类外B方案
		/* B
		virtual ~Animal()=0;
		B */
		//纯虚函数
		virtual void speak()=0;
};

// 配合B:方案
/*B
Animal::~Animal(){
	cout<<"类外纯虚析构函数调用"<<endl;
}
B */

class Cat:public Animal
{
	public:
		string *m_Name;

		Cat(string name){
			cout<<"Cat构造函数调用"<<endl;
			m_Name=new string(name);
		}

		~Cat(){
			cout<<"Cat析构函数调用"<<endl;
			if(m_Name !=nullptr){
				delete m_Name;
				m_Name=nullptr;
			}
		}

		//重写父类的纯虚函数
		virtual void speak(){
			cout<<"小猫 "<<*m_Name<<" 在说话"<<endl;
		}
};

void test01(){
	Animal *animal=new Cat("Tom");
	animal->speak();
	//父类指针在析构时候，不会调用子类中析构函数，导致子类中的堆区属性不能释放
	//解决方案：把父类析构改成虚析构
	delete animal;

}

int main(){

	test01();
	
	return 0;
}
