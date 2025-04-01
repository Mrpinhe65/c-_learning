#include <iostream>
using namespace std;
#include <map>

// map容器 排序

class MyCompare
{
public:
    // 降序 仿函数
    // 仿函数本身和参数都需要const修饰
    bool operator()(const int v1, const int v2) const
    {
        return v1 > v2;
    }
};

void printMap(map<int, int, MyCompare> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "Key= " << it->first << " Value= " << (*it).second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int, MyCompare> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(4, 40));
    m.insert(make_pair(5, 50));
    printMap(m);
}

int main()
{
    test01();
    return 0;
}