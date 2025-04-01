#include <iostream>
#include <algorithm>
using namespace std;

// set容器-自定义数据类型指定排序规则
#include <set>

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

// 伪函数，指定自定义类型数据的排序规则
class ComparePerson
{
public:
    // 伪函数和参数必须都用const修饰
    bool operator()(const Person &p1, const Person &p2) const
    {
        return p1.m_Age < p2.m_Age; // 指定按年龄升序
    }
};

void test01()
{
    // 自定义类型，必须指定排序规则，否则set不知道如何排序
    set<Person, ComparePerson> s;

    // 创建Person对象
    Person p1("刘备", 24);
    Person p2("关羽", 28);
    Person p3("张飞", 25);
    Person p4("赵云", 21);

    // 插入自定义数据
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    // 遍历容器中的自定义数据
    for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
    {
        // cout << (*it).m_Name << ", " << (*it).m_Age << endl;
        cout << it->m_Name << ", " << it->m_Age << endl;
    }
}

int main()
{
    test01();
    return 0;
}