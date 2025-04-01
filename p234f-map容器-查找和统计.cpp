#include <iostream>
#include <algorithm>
using namespace std;

// 查找和统计
// find(key)
// count(key)

#include <map>

void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key= " << (*it).first << ", vlue=" << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(5, 50));
    m.insert(make_pair(4, 40));
    printMap(m);

    // 查找
    map<int, int>::iterator pos = m.find(4);
    if (pos == m.end())
    {
        cout << "No elem" << endl;
    }
    else
    {
        cout << "Key= " << (*pos).first << ", Value= " << pos->second << endl;
    }

    // 统计
    int num = m.count(5);
    cout << "num= " << num << endl;
}

int main()
{
    test01();
    return 0;
}