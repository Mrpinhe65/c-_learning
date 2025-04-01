/*
常用查找算法
find            //查找元素
find_if         //按条件查找元素
adjacent_find   //查找相邻重复元素
binary_search   //二分查找法
count           //统计元素个数
count_if        //按条件统计元素个数
*/

// find_if
// find_if(iterator beg,iterator end,_pred)
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// 对于自定义类型，需要重载 () find_if 才能知道如何去做比较

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 查找 内置数据类型
class GreaterFive
{
    public:
        bool operator()(int val)
        {
            return val>5;
        }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    // 查找容器中 是否有大于5这个元素
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive()); //仿函数加括号
    if (it == v.end())
    {
        cout << "没有找到  " << endl;
    }
    else
    {
        cout << "找到了 " << *it << endl;
    }
}

// 查找 自定义数据类型

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    // 重载 == 底层find知道如何对比Person数据类型
    bool operator==(Person p) // ok
    // bool operator==(const Person &p) // ok
    // bool operator==(const Person &p) const // ok
    //  bool operator==(const Person p) // ok
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

class Greater20
{
    public:
        bool operator()(Person &p)
        {
            return p.m_Age>20;
        }
};

void test02()
{
    vector<Person> v;

    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person pp("bbb", 20);

    vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
    if (it == v.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found it " << it->m_Name << " " << it->m_Age << endl;
    }
}

int main(int argc, char *argv[], char *envp[])
{
    test01();
    test02();
    return 0;
}
