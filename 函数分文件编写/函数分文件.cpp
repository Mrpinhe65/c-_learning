/*************************************************************************
    > File Name: 函数分文件.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月07日 星期日 07时46分51秒
 ************************************************************************/
#include"head.h" 
//函数分文件的头文件，包含了iostream和using namespace std;
//g++编译时，所有相关联的 .cpp文件一并编译：g++ *.cpp
//头文件不需编译
int main(){
	int a=10;
	int b=20;
	int res=sum(a,b);
	cout<<"res="<<res<<endl;
	swap(a,b);

	return 0;
}
