/*************************************************************************
    > File Name: 多继承语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 20时47分06秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Base1{
	public:
		Base1(){
			m_A=100;
		}
		int m_A;
};
class Base2{
	public:
		Base2(){
			m_A=200;
		}
		int m_A;
};


class Son:public Base1,public Base2{
	public:
		Son(){
			m_C=300;
			m_D=400;
		}
		int m_C;
		int m_D;
};

void test01(){
	Son s;
	cout<<"size of Base1="<<sizeof(Base1)<<endl;
	cout<<"size of Base2="<<sizeof(Base2)<<endl;
	cout<<"size of Son="<<sizeof(s)<<endl;
	cout<<"Base1::m_A="<<s.Base1::m_A<<endl;
	cout<<"Base2::m_A="<<s.Base2::m_A<<endl;
}

int main(){
	test01();

	return 0;
}
