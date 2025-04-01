/*************************************************************************
    > File Name: p171-模板-普通函数和模板函数的区别.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月30日 星期五 07时43分46秒
 ************************************************************************/
#include"public.hpp"

template<typename T>
T myAdd(T a,T b){
	return a+b;
}

void test(){
	int a=10;
	int b=20;
	char c='a';
	cout<<myAdd(a,b)<<endl;
	//cout<<myAdd(a,c)<<endl;//编译器不知道如何推算 T 的类型[整形/字符型]？
	cout<<myAdd<int>(a,c)<<endl;//指定编译器按 整形 确定 T 的类型
	cout<<myAdd<char>(a,c)<<endl;//指定编译器按 字符型 确定 T 的类型
}

int main(){
	test();
	return 0;
}
