/*************************************************************************
    > File Name: 容器string-构造函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 12时18分45秒
 ************************************************************************/
#include<iostream>
using namespace std;
//#include<string>

void test01(){
	string s1; //默认构造
	s1="s1---china";
	cout<<"s1=="<<s1<<endl;

	const char* str="Hello world";
	string s2(str);
	cout<<"s2=="<<s2<<endl;

	string s3(s2);
	cout<<"s3=="<<s3<<endl;

	string s4(10,'a');
	cout<<"s4=="<<s4<<endl;

}

int main(){

	test01();
	
	return 0;
}
