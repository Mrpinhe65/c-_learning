/*************************************************************************
    > File Name: p112-类和对象-对象特征-类对象作为类成员.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月16日 星期一 08时48分47秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//类对象作为另一个类的成员----对象成员

//手机类
class Phone{
		//cout<<"======由Person类的初始化（构造函数）调用Phone的初始化"<<endl;
		//类内不能写非成员的语句---非属性、成员函数员的语句需要放在成员函数内写
	public:
		//cout<<"======由Person类的初始化（构造函数）调用Phone的初始化"<<endl;
		//类内不能写非成员的语句---非属性、成员函数员的语句需要放在成员函数内写
		Phone(string pName){
			m_PName=pName;
			cout<<"由Person类的初始化（构造函数）调用Phone的初始化"<<endl;
		}
		string m_PName;
};

//个人类
class Person{
	public:
		Person(string name,string pName):m_Name(name),m_Phone(pName) //m_Phone(pName) 会调用Phone类进行Phone初始化---调用Phone的构造函数
		{
			cout<<"Person 构造函数"<<endl;
		}
		//姓名
		string m_Name;
		//手机类作为Person类的一个属性 对象成员
		Phone m_Phone;
};

void test01(){
	Person p("hwd","apple");
	//Person p("张三","苹果MAX");
	cout<<p.m_Name<<" 拿着 "<<p.m_Phone.m_PName<<" 手机"<<endl;
}

int main(){
	test01();
	return 0;
}
