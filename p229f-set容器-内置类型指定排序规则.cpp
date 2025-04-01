#include <iostream>
#include <algorithm>
using namespace std;

// set容器-内置数据类型指定的排序规则
#include <set>

// 仿函数 改变set容器的排序规则为从大到小
// 仿函数必须是const，参数也必须是const
class MyCompare
{
public:
    bool operator()(const int v1, const int v2) const
    {
        return v1 > v2;
    }
};

void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int> s1;

    s1.insert(50);
    s1.insert(20);
    s1.insert(40);
    s1.insert(10);
    s1.insert(30);

    printSet(s1);

    // 指定排序规则 从大到小

    set<int, MyCompare> s2;

    s2.insert(50);
    s2.insert(20);
    s2.insert(40);
    s2.insert(10);
    s2.insert(30);

    for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
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
