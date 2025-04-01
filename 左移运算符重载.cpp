/*************************************************************************
    > File Name: 左移运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 11时15分28秒
 ************************************************************************/
#include"iostream"
using namespace std;

//左移运算符重载	
//通常不会利用成员函数重载
class Person{
	friend ostream & operator<<(ostream &cout,Person &p);
public:
	Person(int a,int b){
		m_A=a;
		m_B=b;
	}
private:
	int m_A;
	int m_B;
};

//只能用全局函数重载左移运算符operator<<
ostream & operator<<(ostream &cout,Person &p){
	cout<<"p.m_A="<<p.m_A<<", p.m_B="<<p.m_B;
	return cout;
}

void test01(){
	Person p(10,10);

	cout<<p<<endl;
}

int main(){

	test01();

	return 0;
}
