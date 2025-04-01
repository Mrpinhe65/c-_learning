/*************************************************************************
    > File Name: 容器string-子串获取.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 17时13分28秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<string>

void test01(){
	string str="abcdefgh";
	string subStr=str.substr(1,3);
	cout<<"subSyr=="<<subStr<<endl;

	string email="huangpinhe65@gmail.com";
	int pos=email.find('@');
	cout<<"pos=="<<pos<<endl;
	string email_name=email.substr(0,pos);
	cout<<"email_name=="<<email_name<<endl;
}

int main(){
	
	test01();

	return 0;
}
