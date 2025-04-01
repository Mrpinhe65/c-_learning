/*************************************************************************
    > File Name: p121-类和对象-c++运算符重载-加号-成员函数-复学.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月19日 星期四 11时01分07秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//运算符重载也可以发生函数重载

class Person
{
	public:
		// 此方法为成员函数的实现方法
		Person PersonAdd(Person &p)
		{
			Person temp;
			temp.m_A=this->m_A+p.m_A;
			temp.m_B=this->m_B+p.m_B;
			return temp;
		}
/*
		//C++提供的运算符重载方法
		Person operator+(Person & p)
		{
			Person temp;
			temp.m_A=this->m_A+p.m_A;
			temp.m_B=this->m_B+p.m_B;
			return temp;
		}
*/
		int m_A;
		int m_B;
};


// 此方法为全局函数的实现方法
Person PersonAddPerson(Person &pa,Person &pb)
{
	Person temp;
	temp.m_A=pa.m_A+pb.m_A;
	temp.m_B=pa.m_B+pb.m_B;
	return temp;
}

// C++全局函数的重载
Person operator+(Person &pa,Person &pb)
{
	Person temp;
	temp.m_A=pa.m_A+pb.m_A;
	temp.m_B=pa.m_B+pb.m_B;
	return temp;
}

//运算符重载也可以发生函数重载
Person operator+(Person &pa,int num)
{
	Person temp;
	temp.m_A=pa.m_A+num;
	temp.m_B=pa.m_B+num;
	return temp;
}


void test01()
{
	Person p1;
	Person p2;
	p1.m_A=10;
	p2.m_A=20;
	p1.m_B=100;
	p2.m_B=200;
	
	//成员函数的加法实现
	Person p3=p1.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2);
	cout<<"======================================================================================================="<<endl;
	cout<<"普通成员函数实现的加法Person p3=p1.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2)----p3.m_A="<<p3.m_A<<endl;
	cout<<"普通成员函数实现的加法Person p3=p1.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2)----p3.m_B="<<p3.m_B<<endl;
/*	
	//运算符重载之后的实现
	Person p4=p1+p2+p2+p2;
	cout<<"======================================================================================================="<<endl;
	cout<<"运算符重载实现的方法 Person p4=p1+p2+p2+p2----p4.m_A="<<p4.m_A<<endl;
	cout<<"运算符重载实现的方法 Person p4=p1+p2+p2+p2----p4.m_B="<<p4.m_B<<endl;
*/
	//全局函数的加法实现
	Person p5=PersonAddPerson(p1,p2);
	cout<<"======================================================================================================="<<endl;
	cout<<"全局函数实现的加法Person p5=PersonAddPerson(p1,p2)----p5.m_A="<<p5.m_A<<endl;
	cout<<"全局函数实现的加法Person p5=PersonAddPerson(p1,p2)----p5.m_B="<<p5.m_B<<endl;
	cout<<"======================================================================================================="<<endl;

	//C++的全局函数运算符重载
	Person p6=p1+p2;
	cout<<"======================================================================================================="<<endl;
	cout<<"C++全局函数运算符重载Person p6=p1+p2----p6.m_A="<<p6.m_A<<endl;
	cout<<"C++全局函数运算符重载Person p6=p1+p2----p6.m_B="<<p6.m_B<<endl;
	cout<<"======================================================================================================="<<endl;
	//运算符重载也可以发生函数重载
	Person p7=p1+1000;
	cout<<"======================================================================================================="<<endl;
	cout<<"C++运算符重载的函数重载Person p7=p1+1000----p7.m_A="<<p7.m_A<<endl;
	cout<<"C++运算符重载的函数重载Person p7=p1+1000----p7.m_B="<<p7.m_B<<endl;
	cout<<"======================================================================================================="<<endl;
	
}

int main()
{
	system("clear");
	test01();
	return 0;
}
