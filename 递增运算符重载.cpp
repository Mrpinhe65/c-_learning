/*************************************************************************
    > File Name: 递增运算符重载.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 11时55分26秒
 ************************************************************************/
#include"iostream"
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream&cout,MyInteger myint);
	public:
		MyInteger(){
			m_Num=100;
		}

		//重载前置++，返回自身引用
		MyInteger& operator++(){
			m_Num++;
			return *this;
		}
		//重载后置++,返回值
		MyInteger operator++(int){
			MyInteger temp=*this;
			m_Num++;
			return temp;
		}
	private:
		int m_Num;
};

ostream& operator<<(ostream&cout,MyInteger myint)
{
	cout<<myint.m_Num;
	return cout;
}

void test01(){
	MyInteger myint;
	cout<<++(++myint)<<endl;
}

void test02(){
	MyInteger myint;
	cout<<"myint++="<<myint++<<endl;
	cout<<"myint="<<myint<<endl;
}

int main(){
	//test01();
	test02();
	return 0;
}
