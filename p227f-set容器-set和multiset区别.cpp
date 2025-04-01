#include<iostream>
#include<algorithm>
using namespace std;

// set和multiset区别
// set不可插入重复数据，multiset可以插入重复数据
// set插入数据的同时会发挥插入结果，表示插入是否成功
// multiset不会检测数据，因此可以插入重复数据

#include<set>

void test01()
{
    set<int>s;
    pair<set<int>::iterator, bool> ret = s.insert(10);
    if(ret.second)
    {
        cout << "第一次插入成功" << endl;
    }
    else
    {
        cout << "第一次插入不成功" << endl;
    }
    ret = s.insert(10);
    if(ret.second)
    {
        cout << "第二次插入成功" << endl;
    }
    else
    {
        cout << "第二次插入不成功" << endl;
    }
    //multiset 重复插入
    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    for(multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

int main()
{
    test01();
    return 0;
}
