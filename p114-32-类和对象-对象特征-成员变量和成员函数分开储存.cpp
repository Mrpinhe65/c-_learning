/*************************************************************************
    > File Name: p114-32-类和对象-对象特征-成员变量和成员函数分开储存.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月12日 星期一 16时40分23秒
 ************************************************************************/
#include"public.hpp"

class Person{
	public:
		static int m_A;
		int m_B;
		void func(){
			cout<<"func()"<<endl;
		}
		static void func2(){
			cout<<"func2()"<<endl;
		}
};
int Person::m_A=10;

void test01(){
	Person p;
	cout<<"size of p="<<sizeof(p)<<endl;
}

int main(){
	test01();

	return 0;
}
