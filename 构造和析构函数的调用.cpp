/*************************************************************************
    > File Name: 构造和析构函数的调用.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月08日 星期一 17时12分57秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Person
{
	public:
		int age;
		//构造函数
		Person(){
			cout<<"Person的无参构造函数调用"<<endl;
		}

		Person(int a){
			age=a;
			cout<<"Person的有参构造函数调用,age=="<<age<<endl;
		}

		//拷贝构造函数
		Person(const Person &p){
			age=p.age;
			cout<<"Person的拷贝构造函数调用,age==="<<age<<endl;
		}

		//显式法
		//Person p1;
		//Person p2=Person(10);//有参构造
		//Person p3=Person(p2);//拷贝法

		//Person(10);//匿名对象，当前行执行完后，系统立即回收匿名对象

		//注意事项
		//不要利用拷贝构造函数初始化对象，编译器会认为Person (p3)===Person p3对象
		//Person(p3); XXXXX

		//隐式转换法
		//Person p4=10;//相当于Person P4=Person(10);有参构造
		//Person p5=p4;//拷贝构造
		
		//析构函数
		~Person(){
			cout<<"析构函数"<<endl;
		}
};

void test01()
{
	Person p1;
	Person p2(29);
	Person p3(p2);
	Person p4=10;//相当于Person P4=Person(10);有参构造
	Person p5=p4;//拷贝构造
	
}

int main(){
	
	test01();

	return 0;
}
