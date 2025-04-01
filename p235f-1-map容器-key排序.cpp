#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(pair<string,int> a,pair<string,int> b)
{
    //按照value降序进行排序
    return a.second>b.second;
}
int main()
{
    map<string,int> mp;
    mp["ab"] = 10;
    mp["bc"] = 2;
    mp["cde"] = 5;
    //将mp当中所有的键值对构造成一个vec
    vector< pair<string,int> > vec(mp.begin(),mp.end());
    //利用sort函数对vec内的元素进行排序操作
    sort(vec.begin(),vec.end(),cmp);
    //输出
    for(auto it:vec)
        cout<<it.first<<' '<<it.second<<endl;
    return 0;
}
*/

// map容器 排序-自定义类型
#include <map>

// 自定义数据
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

// 排序仿函数
class MapCompare
{
public:
    // bool operator()(const int &v1, const int &v2) const //ok
    // bool operator()(int v1, int v2) const //ok
    bool operator()(int v1, int v2) const // ok
    {
        return v1 > v2;
    }
};

void test01()
{

    map<int, Person, MapCompare> m;

    Person p1("hwd", 59);
    Person p2("hlb", 26);
    Person p3("lsu", 38);

    m.insert(make_pair(1, p1));
    m.insert(make_pair(2, p2));
    m.insert(make_pair(3, p3));

    for (map<int, Person, MapCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key=" << it->first << " Name=" << it->second.m_Name << " Age=" << it->second.m_Age << endl;
    }
    cout << endl;
}

int main()
{
    test01();
    return 0;
}