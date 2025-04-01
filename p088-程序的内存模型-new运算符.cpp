/*************************************************************************
    > File Name: p088-程序的内存模型-new运算符.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月10日 星期二 20时05分56秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//new 的基本语法
int * func(){
	//在堆区创建整形数据
	//返回的是 该数据类型的指针
	int * p=new int(10);
	return p;
}

void test01(){
	int * p=func();
	cout<<*p<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
	//释放堆区数据，关键字 delete
	delete p;
	cout<<*p<<endl;//已经释放了，所以*p是杂乱的数据

}

//堆区开辟数组
void test02(){
	int *arr=new int[10];//[10]代表10个元素的数组 
	//给数组赋值
	for(int i=0;i<10;i++){
		arr[i]=i+100;
	}
	for(int i=0;i<10;i++){
		cout<<"arr["<<i<<"]="<<arr[i]<<",";
	}
	cout<<endl;
	//释放堆区数组: delete[]
	delete[] arr;
}

int main(){
	test01();
	test02();
	return 0;
}
