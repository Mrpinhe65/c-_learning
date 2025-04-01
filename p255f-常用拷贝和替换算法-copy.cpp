/*
   copy         // 容器内指定范围的元素拷贝到另一容器中
   replace      // 将容器内指定范围的旧元素修改为新元素
   replace_if   // 容器内指定范围满足条件的元素替换为新元素
   swap         // 交换两个容器的元素
*/

// copy(iterator beg,iterator end,iterator dest);

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
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int>vt;

    // 目标容器开辟空间
    // 可以制定拷贝范围
    vt.resize(v.size()-4);

    copy(v.begin()+2,v.end()-2,vt.begin());

    for_each(vt.begin(),vt.end(),myPrint);
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}

