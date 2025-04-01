/*
常用算数生成算法 fill
向容器中填充指定的元素
fill(iterator beg,iterator end,vlaue)

*/
#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

void myPrint(int val)
{
    cout<<val<< " ";
}

void test01()
{
    vector<int>v;
    v.resize(10); // 设置容器大小为10，自动填充 0

    // 填充元素
    fill(v.begin()+3,v.end()-2,100);

    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
