/*************************************************************************
    > File Name: 引用和地址传递参数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月07日 星期日 23时26分45秒
 ************************************************************************/
#include"iostream"
using namespace std;

//传地址,用指针接收，函数内操作解引用
void swap01(int *a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

//传值，函数用引用接收，函数内操作引用的别名
void swap02(int &c,int &d){
	int temp=c;
	c=d;
	d=temp;
}

int main(){

	int a=10;
	int b=20;
	cout<<"=====传地址，函数用指针接收，函数内操作解引用*====="<<endl;
	cout<<"a=="<<a<<endl;
	cout<<"b=="<<b<<endl;
	//传地址,函数用指针接收
	swap01(&a,&b);
	cout<<"a=="<<a<<endl;
	cout<<"b=="<<b<<endl;

	//传值，函数用引用接收
	int c=10;
	int d=20;
	cout<<"=====传值，函数用引用接收，函数内用别名操作====="<<endl;
	cout<<"c=="<<c<<endl;
	cout<<"d=="<<d<<endl;
	swap02(c,d);
	cout<<"c=="<<c<<endl;
	cout<<"d=="<<d<<endl;
	return 0;
}
