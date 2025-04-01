/*
常用查找算法 binary_search
查找指定元素是否存在，返回 true 或者 flase
bool binary_search(iterator beg,iterator end,value)
有序序列适用，不能用于无序序列
*/

#include<iostream>
#include<string>

#include<algorithm>
#include<functional>
#include<numeric>

#include<vector>

using namespace std;

void test01()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    v.push_back(15);
    v.push_back(8);

    // 查找容器中是否有80
    bool ret = binary_search(v.begin(),v.end(),80); //found it!
    // bool ret = binary_search(v.begin(),v.end(),82); //not found!
    if(ret)
    {
        cout<< "found it"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    return 0;
}
