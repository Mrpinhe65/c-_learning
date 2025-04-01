#include<iostream>
#include<algorithm>
#include<string>
#include<ctime>
//#include<stdlib.h>
#include<unistd.h>//电脑响铃头文件，cout<<"\a"<<endl 响铃一声
using namespace std;

#define MAX 1000

//结构体定义--联系人
struct Person{
	string m_Name;
	int m_Gender;//1男，2女
	int m_Age;
	string m_Phone;
	string m_Address;
};

//结构体定义----通讯录
struct AddressBooks{
	Person personArray[MAX];
	int m_Size;
};
