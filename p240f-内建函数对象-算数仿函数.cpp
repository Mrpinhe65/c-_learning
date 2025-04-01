/*
内建函数对象
STL 内建了一些函数对象
1.算数仿函数
2.关系仿函数
3.逻辑仿函数

用法：
1.这些仿函数所产生的对象，用法和一般函数完全相同
2.使用内建函数对象，需要包含头文件 <functional>

算数仿函数
1. template<class T> T plus<T> 加法仿函数
1. template<class T> T minus<T> 减法仿函数
1. template<class T> T multiplies<T> 乘法仿函数
1. template<class T> T divies<T> 除法仿函数
1. template<class T> T modulus<T> 取模仿函数
1. template<class T> T negate<T> 取反仿函数
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

#include<functional> // 内建函数对象头文件

using namespace std;

// negate 一元仿函数 取反仿函数
void test01()
{
    negate<int>n;
    cout<<n(50)<<endl;
}

// plus 二元仿函数 加法仿函数
void test02()
{
    plus<int>p; //参数只写一个，只允许相同类型数字相加
    cout<<p(10,20)<<endl; //应用时需要两个参数
}

int main(int srgc,char* srgv[],char* envp[])
{
    test01();
    test02();
    return 0;
}
