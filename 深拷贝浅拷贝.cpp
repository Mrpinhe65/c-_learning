/*************************************************************************
    > File Name: 深拷贝浅拷贝.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月08日 星期一 22时50分58秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Person{
	public:
		int m_Age;
		
		Person(){
			cout<<"Person的默认构造函数"<<endl;
		}

		Person(int age){
			m_Age=age;
			cout<<"Person的有参构造函数"<<endl;
		}

		~Person(){
			cout<<"Person的析构函数调用"<<endl;
		}
};

void test01(){
	Person p1(18);
	cout<<"p1的m_Age=="<<p1.m_Age<<endl;
	Person p2(p1);
	cout<<"p2的m_Age=="<<p2.m_Age<<endl;
}

int main(){
	
	test01();
	return 0;
}
