/*************************************************************************
    > File Name: 成员变量函数分开储存.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月09日 星期二 08时11分35秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Person{
	int a; //非静态成员变量	，属于类的对象上
	static int b;//静态变量成员，不属于类对象上
	void func(){} //非静态成员函数,不属于类对象上
	static void func2(){} //静态成员函数，不属于对象上
};

void test01(){
	Person p;
	//空对象占用内存空间为 1 字节
	//c++编译器会给每个空对象分配一个字节空间，是为了区分对象内存位置
	//每个空对象有独一无二的内存地址
	cout<<"size of p=="<<sizeof(p)<<endl;
}

void test02(){
	Person p;
	cout<<"size of p=="<<sizeof(p)<<endl;
}

int main(){

	//test01();
	test02();
	return 0;
}
