/*
常用算数生成算法
需要头文件 numeric
accumulate  计算容器中元素累计总和
fill        向容器中添加元素
*/

#include<iostream>

#include<numeric>

#include<vector>

using namespace std;

void test01()
{
    vector<int>v;

    for(int i=0;i<=100;i++)
    {
        v.push_back(i);
    }

    int total=accumulate(v.begin(),v.end(),0);
    cout<<total<<endl;
    
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
