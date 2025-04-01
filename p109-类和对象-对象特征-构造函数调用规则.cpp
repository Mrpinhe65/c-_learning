/*************************************************************************
    > File Name: p109-类和对象-对象特征-构造函数调用规则.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月15日 星期日 09时30分31秒

	C++ 默认提供的三个构造函数
	无参构造函数
	有参构造函数
	拷贝构造函数

	按自上而下的顺序，如果我们人为提供某个构造函数
	编写了有参构造函数，则C++不再提供无参构造函数
	编写了拷贝构造函数，则C++不再提供无参及有参构造函数
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Person{
	public:
		Person(){
			cout<<"无参构造函数"<<endl;
		}

		Person(int age){
			m_Age=age;
			cout<<"有参构造函数"<<endl;
		}

		Person(const Person &p){
			m_Age=p.m_Age;
			cout<<"拷贝构造函数"<<endl;
		}

		~Person(){
			cout<<"析构函数"<<endl;

		}

		int m_Age;
};

void test01(){
	Person p1;
	p1.m_Age=18;
	cout<<"以上调用无参构造函数"<<endl;
	cout<<"===================================="<<endl;
	Person p2(21);
	cout<<"以上调用有参构造函数"<<endl;
	cout<<"===================================="<<endl;
	cout<<"以下调用拷贝构造函数"<<endl;
	Person p3(p2);
	cout<<"===================================="<<endl;

}

int main(){
	test01();
	return 0;
}
