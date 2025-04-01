/*************************************************************************
    > File Name: 容器string-字符串拼接操作.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月17日 星期三 14时37分39秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<string>

void test01(){
	string str1="我";
	str1+="爱玩游戏";
	cout<<"str1=="<<str1<<endl;

	str1+=':';
	cout<<"str1=="<<str1<<endl;

	string str2="LOL DNF";
	str1+=str2;
	cout<<"str1=="<<str1<<endl;

	string str3="I";
	str3.append(" love");
	cout<<"str3=="<<str3<<endl;
	
	str3.append(" game abcde",5);
	cout<<"str3=="<<str3<<endl;

	str3.append(str2);
	cout<<"str3=="<<str3<<endl;

	string str4="I love ";
	str4.append("LOL DNF",0,3);
	cout<<"str4=="<<str4<<endl;
}

int main(){

	test01();

	return 0;
}
