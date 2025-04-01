#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

// map容器 大小和交换
// size()
// empty()
// swap()

void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "Key= " << it->first << ", value= " << it->second << endl;
    }
}

// 大小操作
void test01()
{
    map<int, int> m;

    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

    printMap(m);

    // 判断是否为空
    if (m.empty())
    {
        cout << "m 为空" << endl;
    }
    else
    {
        cout << "m里有数据 " << m.size() << "组" << endl;
    }
}

// 交换操作
void test02()
{

    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    cout << "交换前 m1=======" << endl;
    printMap(m1);

    map<int, int> m2;
    m2.insert(pair<int, int>(4, 100));
    m2.insert(pair<int, int>(5, 200));
    m2.insert(pair<int, int>(6, 300));
    cout << "交换前 m2=======" << endl;
    printMap(m2);

    m1.swap(m2);

    cout << "交换后 m1=======" << endl;
    printMap(m1);
    cout << "交换后 m2=======" << endl;
    printMap(m2);
}

int main()
{
    test01();
    test02();
    return 0;
}