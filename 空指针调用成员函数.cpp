/*************************************************************************
    > File Name: 空指针调用成员函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月09日 星期二 09时32分41秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Person{
	public:
		void showClassName(){
			cout<<"This is Person class"<<endl;
		}

		void showPersonAge(){
			//报错原因是因为传入的指针是空指针
			//解决办法如下
			if(this==nullptr){
				return;
			}
			cout<<"age=="<<m_Age<<endl;
		}

		int m_Age;
};

void test01(){
	Person *p=nullptr;
	p->showClassName();
	p->showPersonAge();
}

int main(){
	test01();
	return 0;
}
