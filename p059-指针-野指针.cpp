/*************************************************************************
    > File Name: p059-指针-野指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月04日 星期三 08时55分39秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//int a=10;
	int *p=(int *)0x7fff01d2df1c;
	cout<<p<<endl;
	cout<<*p<<endl;
	return 0;
}
