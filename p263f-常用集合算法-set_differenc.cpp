/*
常用集合算法
set_intersection // 交集
set_union       // 并集
set_difference  // 差集
*/

// 差集 v1 - v2 和 v2 - v1 是不同的

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void myPrint(int val)
{
    cout<<val<<" ";
}

void test01()
{
    vector<int>v1;
    vector<int>v2;

    for(int i=0;i<20;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    for_each(v1.begin(),v1.end(),myPrint);
    cout<<endl;
    for_each(v2.begin(),v2.end(),myPrint);
    cout<<endl;

    vector<int>v;
    // v需要开辟空间，并集按两个容器i中的最大容器空间开辟即可

    v.resize(max(v1.size(),v2.size()));

    // set_union

    // v1 和 v2 的差集
    vector<int>::iterator itEnd=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
    for_each(v.begin(),itEnd,myPrint);
    cout<<endl;

    // v2 和 v1 的差集
    itEnd=set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),v.begin());

    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
    for_each(v.begin(),itEnd,myPrint);
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
