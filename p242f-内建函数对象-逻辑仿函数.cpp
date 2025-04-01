/*
逻辑仿函数
bool logical_and<T>
bool logical_or<T>
bool logical_not<T>
*/
#include<iostream>
#include<string>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;

void test01()
{
    vector<bool>v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for(vector<bool>::iterator it=v.begin();it!=v.end();it++)
    {
        cout <<*it<<" ";
    }
    cout<<endl;

    //利用逻辑非 将容器v 搬运到容器v2中，并执行取反
    vector<bool>v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());

    for(vector<bool>::iterator it=v2.begin();it!=v2.end();it++)
    {
        cout <<*it<<" ";
    }
    cout<<endl;
}   

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
