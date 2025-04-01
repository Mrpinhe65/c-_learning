/*************************************************************************
    > File Name: p115-类和对象-对象特征-this指针的用途.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月16日 星期一 15时59分31秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// this 指针的用途
// 谁来调用类的成员，this 就指向谁
// 当形参和成员函数同名时，可用this指针来区分
// 在类的非静态成员函数中返回对象本身，可使用 return * this;

class Person{
	public:
		Person(int age){
			this->age=age;
		}

		//返回this 函数采用引用的方式返回
		//值的方式返回，则是返回对象的一个拷贝副本，非对象本体
		//引用返回，则是返回对象本体
		Person & PersonAddAge(Person &p){
			this->age+=p.age;
			return *this;
		}

		int age;
};

void test01(){
	Person p(18);
	cout<<"p.age==="<<p.age<<endl;
}

void test02(){
	Person p1(10);
	Person p2(10);
	//链式编程思维：p2每次调用返回的都是自身，所以可以连续调用
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout<<"p2.age=="<<p2.age<<endl;
}

int main(){
	//test01();
	test02();
	return 0;
}
