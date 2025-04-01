#include <iostream>
#include <algorithm>
using namespace std;

// set容器-大小和交换
#include <set>

void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 大小
void test01()
{
    set<int> s1;
    s1.insert(50);
    s1.insert(20);
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);

    // 打印容器
    printSet(s1);

    // 判断容器是否为空
    if (s1.empty())
    {
        cout << "set容器为空" << endl;
    }
    else
    {
        cout << "set容器不为空" << endl;
        cout << "set容器的大小为 = " << s1.size() << endl;
    }
}

// 交换
void test02()
{
    set<int> s1;
    s1.insert(50);
    s1.insert(20);
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);

    set<int> s2;
    // s2.insert(500);
    s2.insert(200);
    s2.insert(100);
    s2.insert(400);
    s2.insert(300);

    // 交换前
    cout << "交换前" << endl;
    printSet(s1);
    printSet(s2);

    // 交换
    s1.swap(s2);

    // 交换后

    cout << "交换后" << endl;
    printSet(s1);
    printSet(s2);
}

int main()
{
    // test01();
    test02();
    return 0;
}
