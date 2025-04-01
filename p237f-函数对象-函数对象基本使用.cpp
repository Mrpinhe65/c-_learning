/*
1.函数对象的概念
    重载函数调用操作符的类，其对象常称为函数对象
    函数对象使用重载的（）时，行为类似函数对象，也叫仿函数
2.本质
    函数对象（仿函数）是一个类，不是一个函数
3.函数对象的使用
    函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
    函数对象超出超出普通函数的概念，函数对象可以有自己的状态
    函数对象可以作为参数传递
*/

#include <iostream>
#include <string>
using namespace std;

class MyAdd
{
public:
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }
};

class MyPrint
{
public:
    MyPrint()
    {
        this->count=0;
    }
    void operator()(string text)
    {
        cout << text << endl;
        this->count++; // 统计使用次数
    }
    int count; // 内部自己的状态
};

// 1.函数对象在使用时，可以像普通函数那样调用，可以有参数可以有返回值
void test01()
{
    MyAdd myadd;
    cout << myadd(10, 10) << endl;
    ;
}

// 2.函数对象超出普通函数的概念函数对象可以有自己的状态
void test02()
{
    MyPrint myPrint;
    myPrint("hello world!");
    myPrint("hello world!");
    myPrint("hello world!");
    myPrint("hello world!");
    
    cout<<"MyPrint调用的次数 "<<myPrint.count<< endl;
}

// 3.函数对象可以作为参数传递 

void doPrint(MyPrint &p,string text)
{
    p(text);
}

void test03()
{
    MyPrint mp;
    doPrint(mp,"Hello C++");
}

int main(int argc, char *argv[], char *envp[])
{
    test01();
    test02();
    test03();
    return 0;
}
