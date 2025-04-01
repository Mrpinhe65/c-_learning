/*
deque 排序操作
sort(iterator begin(), iterator end())
*/

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 仿函数 排序 大到小
class SortByClass
{
public:
    bool operator()(int val1, int val2)
    {
        return val1 > val2;
    }
};

// 排序 全局函数
bool sortByFunction(int v1, int v2)
{
    return v1 > v2;
}

void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);

    // 排序操作 默认升序--从小到大
    // 300 200 100 10 20 30
    sort(d.begin(), d.end());
    printDeque(d);

    // 排序 仿函数-从大到小
    sort(d.begin(), d.end(), SortByClass()); // ok

    // 排序 全局函数-从大到小
    // sort(d.begin(), d.end(), sortByFunction); // ok

    printDeque(d);
}

int main()
{
    test01();
    return 0;
}
