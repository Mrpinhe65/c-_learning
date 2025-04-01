/*
常用查找算法 count_if
函数原型 count(iterator beg,iterator end,_pred)
*/

#include<iostream>
#include<string>

#include<algorithm>
#include<functional>
#include<numeric>

#include<vector>

using namespace std;

//count_if 内置数据类型

class Greater20
{
    public:
        bool operator()(int val)
        {
            return val>20;
        }
};

void test01()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(20);

    int ret=count_if(v.begin(),v.end(),Greater20());
    cout<<ret<<endl;
}

//count_if 自定义数据类型

class Person
{
    public:
        Person(string name, int age)
        {
            this->m_Name=name;
            this->m_Age=age;
        }

        string m_Name;
        int m_Age;
};

class AgeGreater30
{
    public:
        bool operator()(Person p)
        {
            if(p.m_Age>30)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

void test02()
{
    Person p1("刘备",35);
    Person p2("关羽",35);
    Person p3("张飞",35);
    Person p4("赵云",30);
    Person p5("曹操",45);

    vector<Person>v;

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count_if(v.begin(),v.end(),AgeGreater30());
    cout<<"大于30岁的人员个数"<<num<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    test02();
    return 0;
}
