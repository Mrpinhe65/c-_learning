/*************************************************************************
    > File Name: p053-函数-函数的常见式样.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月03日 星期二 09时58分56秒

	无参无返
	有参无返
	无参有返
	有参有返
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

string test04(string str);
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

int main(){
	test01();
	test02("有参无返");
	cout<<test03()<<endl;
	cout<<test04("有参有返")<<endl;
	return 0;
}
