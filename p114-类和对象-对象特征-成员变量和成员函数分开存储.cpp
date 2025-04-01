/*************************************************************************
    > File Name: p114-类和对象-对象特征-成员变量和成员函数分开存储.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月16日 星期一 15时29分01秒

	在C++中，类内的成员变量和成员函数分开存储
	只有非静态成员变量才属于类的对象上,占用类空间
	成员函数不占用类空间，所有函数共享一个函数实例
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//通过添加不同的成员变量和函数，测量对象的长度sizeof，明确是否占用对象空间及占用多少

class Person{
	public:
		//非静态成员变量占用对象空间
		int m_A;
		
		//静态成员变量不占用对象空间
		static int m_B;
		
		//函数也不占用对象空间，所有函数共享一个函数实例
		void func(){
			cout<<"mA="<<this->m_A<<endl;
		}
		
		//静态成员函数，不占用对象空间
		static void func2(){
		}
};

int Person::m_B=0;

void test01(){
	Person p;
	//c++编译器为每个空对象分配 1 个字节的内存空间，为了区分空对象在内存的位置
	cout<<"sizeof p="<<sizeof(p)<<endl;
}

void test02(){
	Person p1;
	cout<<"sizeof p1="<<sizeof(p1)<<endl;
}

int main(){
	test01();
	return 0;
}
