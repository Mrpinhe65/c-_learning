/*
常用算法
算法主要由<algorithm> <functional> <numeric>组成


常用遍历算法
for_each  // 遍历容器
transform // 搬运容器内容到另一个容器

for_each(iterator beg,iterator end,_func)

 */

#include<iostream>
#include<algorithm>
#include<functional>
#include<numeric>
#include<vector>

using namespace std;

//常用遍历用法 for_each

//成员函数
class print02
{
    public:
        void operator()(int val)
        {
            cout<<val<<" ";
        }
};
//普通函数
void print01(int val)
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
    //for_each 遍历
    // for_each(v.begin(),v.end(),print01); //ok 普通函数，不带括号
    for_each(v.begin(),v.end(),print02()); //ok 成员函数，带括号
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
