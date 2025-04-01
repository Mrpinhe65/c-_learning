/*************************************************************************
    > File Name: p107-24-类和对象-对象特征-函数的分类及调用.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月11日 星期日 15时02分33秒
 ************************************************************************/
#include"public.hpp"

//调用默认构造函数不能：Person p()----小括号不能加，加了编译器就认为是函数声明了---如同 void func(); 的函数声明一样了
//拷贝函数特有写法：Person(const Person &p){}
//匿名对象--执行完毕系统就回收销毁

class Person{
	public:
		Person(){
			cout<<"Person的无参（默认）构造函数"<<endl;
		}
		
		Person(int age){
			m_Age=age;
			cout<<"Person的有参构造函数"<<endl;
		}
		
		Person(const Person &p) //注意特有的写法：const 和 &
		{
			m_Age=p.m_Age;
			cout<<"Person的拷贝构造函数"<<endl;
		}

		~Person(){
			cout<<"Person的析构函数"<<endl;
		}
		int m_Age;
};

void test(){
	//括号法调用
	cout<<endl<<"括号法调用"<<endl;
	Person p1; //默认法调用	
	Person p2(21);//有参构造函数调用
	Person p3(p2);//拷贝构造函数调用
	cout<<"p2 Age="<<p2.m_Age<<endl;	
	cout<<"p3 Age="<<p3.m_Age<<endl;	
	
	//显式法调用
	cout<<endl<<"显式法调用"<<endl;
	Person x1;//调用无参构造函数
	Person x2=Person(10);//调用有参构造函数
	//Person(10); //匿名构造对象，特点：当前执行完成后，系统会自动回收销毁匿名对象
	Person x3=Person(x2);//调用拷贝构造函数
	cout<<"x2 Age="<<x2.m_Age<<endl;	
	cout<<"x3 Age="<<x3.m_Age<<endl;

	//隐式转换法调用
	cout<<endl<<"隐式转换法调用"<<endl;
	Person y1=10;  //====Person y1=Person(10);
	Person y2=y1;  //====Person(y2)=Person(y1);
	cout<<"y1 Age="<<y1.m_Age<<endl;	
	cout<<"y2 Age="<<y2.m_Age<<endl<<endl;
}

int main(){
	test();
	return 0;
}
