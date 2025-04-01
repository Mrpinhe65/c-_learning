/*************************************************************************
    > File Name: this指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月09日 星期二 08时30分14秒
 ************************************************************************/
#include"iostream"
using namespace std;

//this指针，类似于python的self
//解决名称冲突
//返回对象本身
class Person{
	public:
		int age;
		Person(int age){
			this->age=age;
		}

		 //Person personAddAge(Person &p){ //值返回：返回新的对象
		 Person& personAddAge(Person &p){ //&引用返回：返回调用的对象本身
			this->age+=p.age;
			return *this;
		}
};

void test01(){
	Person p1(18);
	cout<<"p1的年龄age==="<<p1.age<<endl;
}

void test02(){
	Person p1(10);
	Person p2(21);
	//链式编程思想
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p2);
	//p2.personAddAge(p1);
	cout<<"p2的年龄age==="<<p2.age<<endl;
}

int main(){
	//test01();
	test02();
	return 0;
}
