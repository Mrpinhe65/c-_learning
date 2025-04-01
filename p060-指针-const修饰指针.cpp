/*************************************************************************
    > File Name: p060-指针-const修饰指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月04日 星期三 09时03分40秒

	1.const 修饰指针----常量指针：指针指向可以修改，指针指向的值不能修改
	2.const 修饰常量----指针常量:指针指向不可以修改，指针指向的值可以修改
	3.const 既修饰指针，又修饰常量
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a=10;
	int b=20;
	
	cout<<endl;
	cout<<"===================================================================="<<endl;
	cout<<"1.const 修饰指针----常量指针：指针指向可以修改，指针指向的值不能修改"<<endl;
	const int * p1=&a;
	cout<<"const int * p1,指针指向可以修改，指向的值不能修改,p1="<<p1<<endl;
	cout<<"const int * p1,指针指向可以修改，指向的值不能修改,*p1="<<*p1<<endl;
	p1=&b;
	cout<<"const int * p1,指针指向可以修改，指向的值不能修改,p1="<<p1<<endl;
	cout<<"const int * p1,指针指向可以修改，指向的值不能修改,*p1="<<*p1<<endl;
	cout<<"//指针指向的值不能修改，下句不能编译通过"<<endl;
	cout<<"* p1=30 编译通不过"<<endl;
	
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"//2.const 修饰常量----指针常量:指针指向不可以修改，指针指向的值可以修改"<<endl;
	int * const p2=&a;
	
	cout<<"int * const p2,指针指向不可以修改，指向的值可以修改,p2="<<p2<<endl;
	cout<<"int * const p2,指针指向不可以修改，指向的值可以修改,*p2="<<*p2<<endl;
	
	* p2=99;
	cout<<"int * const p2,指针指向不可以修改，指向的值可以修改,a="<<a<<endl;
	cout<<"int * const p2,指针指向不可以修改，指向的值可以修改,*p2="<<*p2<<endl;

	cout<<"//下句修改了指针指向，编译不通过"<<endl;
	cout<<"p2=&b 编译通不过"<<endl;
	
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"//3.const 既修饰指针，又修饰常量,指针指向不能修改，指针指向的值不能修改"<<endl;
	const int * const p3=&a;
	cout<<"int * const p3,指针指向不可以修改，指向的值不可以修改,a="<<a<<endl;
	cout<<"int * const p3,指针指向不可以修改，指向的值不可以修改,*p3="<<*p3<<endl;
	//以下语句编译通不过
	cout<<"p3=&b 编译通不过"<<endl;
	cout<<"*p3=66 编译通不过"<<endl;

	return 0;
}
