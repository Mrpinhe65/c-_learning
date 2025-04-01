/*************************************************************************
    > File Name: 容器string-字符串查找替换.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 14时59分12秒
 ************************************************************************/
#include<iostream>
using namespace std;
//#include<string>

void test01(){
	
	string str1="abcdefg";
	int pos=str1.find("de");
	cout<<"pos=="<<pos<<endl;
	
	cout<<"str1=="<<str1<<endl;
	str1.replace(1,3,"1111");
	cout<<"str1=="<<str1<<endl;

}

int main(){
	test01();
	return 0;
}
