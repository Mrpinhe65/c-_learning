/*************************************************************************
    > File Name: 赋值运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 14时29分20秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Person{
	public:
		int *m_Age;
		Person(int age){
			m_Age=new int(age);
		}
		~Person(){
			if(m_Age !=nullptr){
				delete m_Age;
				m_Age=nullptr;
			}
		}
		//重载 赋值运算符
		Person& operator=(Person &p){
			//编译器提供浅拷贝
			//m_Age=p.m_Age;
			
			//先判断是否有属性在堆区，先释放干净，再深拷贝
			if(m_Age !=nullptr){
				delete m_Age;
				m_Age=nullptr;
			}
			m_Age=new int(*p.m_Age);
			return *this;
		}
};

void test01
(){
	Person p1(18);
	Person p2(20);
	Person p3(30);
	//赋值操作
	p3=p2=p1;

	cout<<"p1.m_Age="<<*p1.m_Age<<endl;
	cout<<"p2.m_Age="<<*p2.m_Age<<endl;
	cout<<"p3.m_Age="<<*p3.m_Age<<endl;
}

int main(){

	test01();


	return 0;
}
