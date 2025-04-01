/*************************************************************************
    > File Name: 类模板案例-数组封装.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月16日 星期二 16时58分49秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include"MyArray.hpp"

void printIntArray(MyArray<int> & arr){
	for(int i=0;i<arr.getSize();i++){
		cout<<arr[i]<<endl;
	}
}

//测试自定义数组
class Person{
	public:
		Person(){

		}
		Person(string name,int age){
			this->m_Name=name;
			this->m_Age=age;
		}
		string m_Name;
		int m_Age;
};

void printPersonArray(MyArray<Person>&arr){
	for(int i=0;i<arr.getSize();i++){
		cout<<"姓名=="<<arr[i].m_Name<<" ,年龄=="<<arr[i].m_Age<<endl;
	}
}

void test01()
{
	MyArray <int>arr1(50);
	
	for(int i=0;i<50;i++){
		arr1.Push_Back(i);
	}
	printIntArray(arr1);

	cout<<"arr1的容量==="<<arr1.getCapacity()<<endl;
	cout<<"arr1的大小==="<<arr1.getSize()<<endl;
	
	arr1.Pop_Back();
	arr1.Pop_Back();
	arr1.Pop_Back();
	arr1.Pop_Back();
	cout<<"arr1的容量==="<<arr1.getCapacity()<<endl;
	cout<<"arr1的大小==="<<arr1.getSize()<<endl;

	MyArray <int>arr2(arr1);
	MyArray <int>arr3(100);
	arr3=arr1;

}

void test02(){
	MyArray<Person>arr(10);
	Person p1("孙悟空",999);
	Person p2("唐僧",36);
	Person p3("猪八戒",42);
	Person p4("赵云",27);
	Person p5("安其拉",19);
	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	printPersonArray(arr);
	cout<<"arr的容量==="<<arr.getCapacity()<<endl;
	cout<<"arr的大小==="<<arr.getSize()<<endl;
}

int main()
{

	test01();
	test02();
	return 0;
}
