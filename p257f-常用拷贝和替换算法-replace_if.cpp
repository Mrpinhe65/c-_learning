/*
replace_if(iterator beg,iterator end, _pred, newvalue)

*/
#include<iostream>

#include<algorithm>
#include<functional>

#include<vector>

using namespace std;

void myPrint(int val)
{
    cout<<val<<" ";
}

class Great60
{
    public:
        bool operator()(int val)
        {
            return val>=60;
        }
};

bool great60(int val)
{
    return val>=60;
}

void test01()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(60);
    v.push_back(50);
    v.push_back(20);
    v.push_back(80);
    v.push_back(40);
    v.push_back(90);
    v.push_back(70);
    v.push_back(40);

    // replace_if
    // 大于等于60的贴换成3000
    //replace_if(v.begin(),v.end(),Great60(),3000); // ok 仿函数
    replace_if(v.begin(),v.end(),great60,3000); // ok 全局函数
    
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;



}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
