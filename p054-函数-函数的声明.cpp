/*************************************************************************
    > File Name: p054-函数-函数的声明.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月03日 星期二 10时19分07秒
	
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

//函数的声明，放在前面
//先声明后，函数之间的互相调用顺序就不用按顺序
void test01();
void test02(string str);
string test03();
string test04(string str);

int main(){
	test01();
	test02("有参无返");
	cout<<test03()<<endl;
	cout<<test04("有参有返")<<endl;
	return 0;
}

//函数体放在后面,也可以分文件存放
//无参无返
void test01(){
	cout<<"无参无返"<<endl;
	cout<<test04("函数01调用后面的函数04")<<endl;
}

//有参无返
void test02(string str){
	cout<<str<<endl;
}

//无参有返
string test03(){
	return "无参有返";
}

//有参有返
string test04(string str){
	return "函数返回："+str;
}
