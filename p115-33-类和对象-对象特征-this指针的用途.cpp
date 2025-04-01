/*************************************************************************
    > File Name: p115-33-类和对象-对象特征-this指针的用途.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月12日 星期一 17时45分50秒
 ************************************************************************/
#include"public.hpp"

class Person{
	public:
		Person(int age){
		this->age=age;
		}
		int age;
		Person& PersonAdd(Person &p) //Person& 引用，配合 return *this
		{
			this->age +=p.age;
			return *this;
		}
};

void test(){
	Person p(21);
	cout<<p.age<<endl;
	Person p1(10);
	Person p2(10);
	p2.PersonAdd(p1).PersonAdd(p1).PersonAdd(p1);
	cout<<"p2.age="<<p2.age<<endl;

}
int main(){
	test();
	return 0;
}
