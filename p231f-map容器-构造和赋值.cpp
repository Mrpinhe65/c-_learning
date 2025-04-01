#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// map容器基本概念
// map中所有元素都是pair对组
// pair中第一个元素为key（键值），起到索引作用，第二个元素为valu（实值）
// map所有元素按key键值自动排序
// map本质属于关联式容器，底层结构用二叉树实现
// map优点 可以根据key键值快速找到valu
// map/multimap map不允许重复键值，multimap允许有重复键值

// map容器-构造和赋值
// 构造
// map<T1,T2> mp; 默认构造
// map（const map &mp）； 拷贝构造
// 赋值：map & operator=（const map &mp） 重载等号操作符
#include <map>

void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key= " << (*it).first << ", value= " << it->second << endl;
    }
}

void test01()
{
    // 创建map容器
    map<int, int> m;

    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

    printMap(m);

    // 拷贝构造
    map<int, int> m2(m);
    cout << "拷贝构造========================" << endl;
    printMap(m2);

    // 赋值
    map<int, int> m3;
    m3 = m2;
    cout << "赋值操作========================" << endl;
    printMap(m3);
}

int main()
{
    test01();
    return 0;
}