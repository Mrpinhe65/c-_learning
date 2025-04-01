/*************************************************************************
    > File Name: operator递增.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月26日 星期一 10时01分00秒
 ************************************************************************/
#include"public.hpp"

class Person{
	public:
		
		Person & operator++() // ++p
		{
			m_A++;
			m_B++;
			return *this;
		}

		Person operator++(int) //p++
		{
			Person temp;
			temp.m_A=this->m_A;
			temp.m_B=this->m_B;
			this->m_A++;
			this->m_B++;
			return temp;
		}

		int m_A;
		int m_B;
};

void test(){
	Person p;
	p.m_A=0;
	p.m_B=1;
	++p;
	cout<<"++p="<<p.m_A<<","<<p.m_B<<endl;
	++p;
	cout<<"++p="<<p.m_A<<","<<p.m_B<<endl;
	Person p2;
	p2.m_A=10;
	p2.m_B=20;
	cout<<"p2="<<p2.m_A<<","<<p2.m_B<<endl;
	((p2++)++)++;
	cout<<"p2++="<<p2.m_A<<","<<p2.m_B<<endl;
	int a=0;
	((a++));
	cout<<a<<endl;

}	

int main(){
	test();
	return 0;
}
