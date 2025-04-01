/*************************************************************************
    > File Name: 继承同名静态成员的处理方式.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 18时57分04秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Base{
	public:
		static int m_A;
		static void func(){
			cout<<"Base 下静态函数"<<endl;
		}
};
int Base::m_A=100;//静态属性类内声明，类外初始化

class Son:public Base{
	public:
		static int m_A;
		static void func(){
			cout<<"Son 下静态函数"<<endl;
		}
};
int Son::m_A=200;

void test01(){

	//通过对象访问
	cout<<"通过对象访问======"<<endl;
	Son s;
	cout<<"Son 下 s.m_A="<<s.m_A<<endl;
	cout<<"Base下 s.Base::m_A="<<s.Base::m_A<<endl;
	
	//通过类名访问
	cout<<"通过类名访问======"<<endl;
	cout<<"Son 下 Son::m_A="<<Son::m_A<<endl;
	cout<<"Base下 Son::Base::m_A="<<Son::Base::m_A<<endl;
}

void test02(){
	//通过对象访问
	Son s1;
	s1.func();
	s1.Base::func();
	//通过类名访问
	Son::func();
	Son::Base::func();
}

int main(){

	test01();
	test02();
	return 0;
}
