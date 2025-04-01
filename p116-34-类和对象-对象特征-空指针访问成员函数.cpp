/*************************************************************************
    > File Name: p116-34-类和对象-对象特征-空指针访问成员函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月13日 星期二 10时26分42秒
 ************************************************************************/
#include"public.hpp"

class Person{
	public:
		void showClassName(){
			cout<<"This is Person class"<<endl;
		}
		void showPersonAge(){
			if(this==NULL){
				return;
			}
			cout<<"Person m_Age="<<this->m_Age<<endl;
		}
		int m_Age;
};

void test01(){
	Person * p=NULL;
	p->showClassName();
	p->showPersonAge();
}

int main(){
	test01();
	return 0;
}
