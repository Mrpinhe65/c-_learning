/*************************************************************************
    > File Name: 拷贝构造函数调用时机.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月08日 星期一 21时38分55秒
 ************************************************************************/
#include"iostream"
using namespace std;

//拷贝函数的调用时机
//1.使用一个已经创建完成的对象来初始化新对象
//2.值传递的方式给函数参数传值
//3.值方式返回局部对象

class Person
{
	public:
		int m_Age;
		Person()
		{
			cout<<"Person默认的构造函数调用"<<endl;
		}

		Person(int age)
		{
			m_Age=age;
			cout<<"Person有参构造函数调用，m_Age=="<<m_Age<<endl;
		}
		//拷贝构造函数
		Person(const Person &p)
		{
			m_Age=p.m_Age;
			cout<<"Person拷贝构造函数调用，m_Age=="<<m_Age<<endl;
		}
		
		~Person()
		{
			cout<<"Person析构函数"<<endl;
		}
};

//1.使用一个已经创建完成的对象来初始化新对象
void test01(){
	Person p1(20);
	Person p2(p1);
	cout<<"p2的m_Age=="<<p2.m_Age<<endl;
}
//2.值传递的方式给函数参数传值

void doWork(Person p){

}

void test02(){
	Person p;
	doWork(p);
}

//3.值方式返回局部对象

Person doWork2(){
	Person p1;
	return p1;
}

void test03(){
	Person p=doWork2();
}

int main(){

	//test01();
	//test02();
	test03();
	
	return 0;
}
