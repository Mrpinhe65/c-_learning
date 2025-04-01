/*************************************************************************
    > File Name: p110-27-类和对象-对象特征-深拷贝与浅拷贝.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月10日 星期六 16时59分46秒
 ************************************************************************/
#include"public.hpp"

//浅拷贝带来的问题就是堆区重复释放错误。

class Person{
	public:
		Person(){
			cout<<"Person无参构造函数调用"<<endl;
		}
		Person(int age,int height){
			m_Age=age;
			m_Height=new int(height);
			cout<<"Person有参构造函数调用"<<endl;
		}
		
		//自己实现拷贝构造函数，深拷贝
		Person(const Person &p) //拷贝构造函数的写法,形参：const Person &p,不写const似乎也可以
		//Person(Person &p) //拷贝构造函数的写法,形参：const Person &p,不写const似乎也可以
		{
			m_Age=p.m_Age;
			/*
			//这是拷贝函数默认的浅拷贝,析构函数释放堆区内存时，会发生重复释放同一个内存空间的错误
			//浅拷贝，把p的堆区指针直接拷贝给对象，造成两个对象的指针相同，都是指向同一堆区地址
			m_Height=p.m_Height;//浅拷贝
			*/

			//改造成深拷贝,对象新建一个堆区，这个堆区与p的堆区地址不相同，但是堆区存放的数据拷贝p的数据（指针不同，数据相同）
			//在析构函数释放指针指向的内存时，各自释放各自的内存空间，不发生重复释放同一个内存地址的错误
			m_Height=new int(*(p.m_Height));//新建堆区，地址与对象p的不同，但存放的数据和对象p是一样的
			cout<<"=============================================================="<<endl;
			cout<<"传过来的对象堆区内存地址--指针=="<<&p<<endl;
			cout<<"新建立的对象堆区内存地址--指针=="<<m_Height<<endl;
			cout<<"=============================================================="<<endl;
			cout<<"Person拷贝函数调用"<<endl;
		}

		~Person(){
			//释放m_Height
			if(m_Height!=NULL){
				delete m_Height;
				m_Height=NULL;
			}
			cout<<"Person析构函数调用"<<endl;
		}
		int m_Age;
		int * m_Height;

};

void test(){
	Person p1(18,176);
	cout<<"年龄 "<<p1.m_Age<<" 身高 "<<*(p1.m_Height)<<endl;
	Person p2(p1);
	cout<<"年龄 "<<p2.m_Age<<" 身高 "<<*(p2.m_Height)<<endl;
	Person p3=p2;
	cout<<"年龄 "<<p3.m_Age<<" 身高 "<<*(p3.m_Height)<<endl;
}

int main(){
	test();
	return 0;
}
