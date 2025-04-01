// 常用排序算法 merge
// 合并两个有序容器

#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
        v2.push_back((i+1)*10);
    }

    // 目标容器
    vector<int>v;

    // 目标容器分配空间
    v.resize(v1.size()+v2.size());

    // merge
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
