/*
常用算法
算法主要由<algorithm> <functional> <numeric>组成


常用遍历算法
for_each  // 遍历容器
transform // 搬运容器内容到另一个容器

for_each(iterator beg,iterator end,_func)
transform(iterator beg1,iterator end1,iterator beg2,_func)
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TransVector
{
    public:
        int operator()(int val)
        {
            return val;
        }

};

void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    vector<int>vTarget;
    vTarget.resize(v.size()); //开辟目标容器空间
    transform(v.begin(),v.end(),vTarget.begin(),TransVector());
    for(vector<int>::iterator it=vTarget.begin();it!=vTarget.end();it++)
    {
        cout<<*it<< " ";
    }
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
