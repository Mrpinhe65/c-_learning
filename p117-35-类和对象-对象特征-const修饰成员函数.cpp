/*************************************************************************
    > File Name: p117-35-类和对象-对象特征-const修饰成员函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月10日 星期六 16时08分07秒
 ************************************************************************/
#include"public.hpp"
//关键词：const mutable 
//常函数
class Person{
	public:
		Person(){
			this->m_A=130;
		}

		//在成员函数括号后加const，是修饰this指针，this指针指向的值不可修改
		void showPerson() const
		{
			//this->m_A=110;
			this->m_B=200;
			system("clear");
			cout<<this->m_A<<endl;
			cout<<this->m_B<<endl;
		}
		
		int m_A=100;
		mutable int m_B=180; //特殊变量，即使在常函数中，也可以修改
};

//常对象
void test(){
	const Person p1;//常对象
	//p1.m_A=120;
	p1.m_B=220;
	cout<<p1.m_A<<endl;
	cout<<p1.m_B<<endl;
	cout<<"常对象只能调用常函数"<<endl;
	p1.showPerson();
}

int main(void){
	Person p;
	p.showPerson();

	cout<<"test()"<<endl;
	test();

	return 0;
}
