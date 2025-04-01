/*************************************************************************
    > File Name: p058-指针-空指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月04日 星期三 08时31分17秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int *p1=NULL;
	int *p2=nullptr;
	int a=10;
	p1=&a;
	cout<<*p1<<endl;
	return 0;
}
