/*************************************************************************
    > File Name: operator左移.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月26日 星期一 09时26分26秒
 ************************************************************************/
#include"public.hpp"
//左移运算符 <<

class Person{
	friend ostream & operator<<(ostream &cout,Person &p);
	public:
		Person(int a,int b){
			m_A=a;
			m_B=b;
		}
	private:
		int m_A;
		int m_B;
};

//只能使用全局函数进行<<运算符重载
ostream & operator<<(ostream &cout,Person &p)
{
	cout<<"p.m_A="<<p.m_A<<",p.m_B="<<p.m_B;
	return cout;
}

void test(){
	Person p1(10,20);
	//p1.m_A=10;
	//p1.m_B=20;
	cout<<p1<<endl;
}

int main(){
	test();
	return 0;
}
