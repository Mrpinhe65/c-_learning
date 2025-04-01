/*************************************************************************
    > File Name: 构造函数调用规则.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月08日 星期一 22时13分31秒
 ************************************************************************/
#include"iostream"
using namespace std;
//构造函数的调用规则
//一、创建一个类，编译器为每个类提供三个函数：
//1.默认构造 （空实现）
//2.析构函数 （空实现）
//3.拷贝函数 （值拷贝）
//二、
//2.1如果写了有参构造函数，编译器不再提供默认构造函数，依然提供拷贝构造函数
//2.2如果写了拷贝构造函数，编译器不再提供其它普通构造函数
class Person{

	public:
		int m_Age;
		Person(){
			cout<<"Person的默认构造函数"<<endl;
		}

		Person(int age){
			m_Age=age;
			cout<<"Person的有参构造函数调用，m_Age=="<<m_Age<<endl;
		}

		Person(const Person &p){
			m_Age=p.m_Age;
			cout<<"Person的拷贝构造函数调用，m_Age=="<<m_Age<<endl;
		}

		~Person(){
			cout<<"Person析构函数"<<endl;
		}
		
};

void test01(){
	Person p;
	p.m_Age=18;

	Person p2(p);
	cout<<"p2的m_Age=="<<p2.m_Age<<endl;
}

int main(){

	test01();
	return 0;
}
