/*************************************************************************
    > File Name: 函数对象-仿函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月21日 星期日 17时42分19秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

//函数对象（仿函数）
//使用时，可像普通函数一样调用，可以用参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态
//函数对象可以作为参数传递

class MyAdd{
	public:
		int operator()(int a,int b){
			return a+b;
		}
};

//函数对象在使用时，可像普通函数一样调用，可以用参数，可以有返回值
void test01(){
	MyAdd myAdd; //myAdd即为函数对象
	cout<<myAdd(10,8)<<endl;
}

//函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint{
	public:
		MyPrint(){
			this->count=0;
		}
		void operator()(string text){
			cout<<text<<endl;
			this->count++;
		}
		int count;
};

void test02(){
	MyPrint myPrint;
	myPrint("Hello world!");
	myPrint("Hello world!");
	myPrint("Hello world!");
	myPrint("Hello world!");
	myPrint("Hello world!");
	cout<<"myPrint调用的次数==="<<myPrint.count<<endl;
}

//函数对象可以作为参数传递
void doPrint(MyPrint &mp,string t){
	mp(t);
}

void test03(){
	MyPrint myPrint;
	doPrint(myPrint,"Hello C++");
}

int main(){
	test01();
	test02();
	test03();
	return 0;
}
