#include<iostream>
#include<algorithm>
using namespace std;

//set容器-查找和统计
// find(key) 若元素key存在，返回该键的元素的迭代器，不存在则返回set.end()
// count(key) 统计元素个数

#include<set>

void printSet(set<int>&s)
{
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s1;
    s1.insert(40);
    s1.insert(20);
    s1.insert(30);
    s1.insert(10);

    //遍历打印
    printSet(s1);

    //查找元素
    set<int>::iterator pos = s1.find(30);
    if(pos != s1.end())
    {
        cout << "查找的元素位于 " << *pos << endl;
    }
    else
    {
        cout << "未查找到元素" << endl;
    }
}

//统计
void test02()
{
    set<int>s2;
    s2.insert(10);
    s2.insert(50);
    s2.insert(40);
    s2.insert(20);
    s2.insert(30);
    s2.insert(60);

    int num = s2.count(30);
    cout << "元素的个数 " << num << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}
