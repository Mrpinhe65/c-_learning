//常用排序算法-reverse
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
    
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
    
    // reverse
    
    // 全部翻转 reverse
    // reverse(v.begin(),v.end()); // ok
    
    // 仅对其中一部分 进行反转
    reverse(v.begin()+1,v.end()-2); // ok
    
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
