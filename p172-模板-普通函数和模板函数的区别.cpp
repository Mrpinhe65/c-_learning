/*************************************************************************
    > File Name: p172-普通函数和模板函数的调用规则.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月30日 星期五 07时57分26秒
	1.如果普通函数和模板函数都可以实现，优先调用普通函数
	2.可以通过空模板参数列表来强制调用函数模板
	3.函数模板可以重载
	4.如果函数模板可以产生更好的匹配则有限调用函数模板
 ************************************************************************/
#include"public.hpp"

template<typename T>
void myPrint(T a,T b){
	cout<<"调用函数模板"<<endl;
}

template<typename T>
void myPrint(T a,T bi,T c){
	cout<<"调用重载的函数模板"<<endl;
}

void myPrint(int a,int b){
	cout<<"调用普通函数"<<endl;
}

void test(){
	int a=10;
	int b=20;
	myPrint(a,b);

	//通过模板空列表参数，强制调用模板函数
	myPrint<>(a,b);

	//调用重载的模板函数
	myPrint(a,b,100);

	//模板函数更好的匹配（更简单的匹配，直接匹配 T 为 char，不用将变量 d e[char] 转换成 [int])----编译器能偷懒就偷懒
	char d='a';
	char e='h';
	myPrint(d,e);

}
int main(){
	test();
	return 0;
}
