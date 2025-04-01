/*
常用算法 count
统计元素个数
int count(iterator begin(),iterator end(),value)

*/

#include<iostream>
#include<string>

#include<algorithm>
#include<functional>
#include<numeric>

#include<vector>

using namespace std;

//1. 统计内置数据类型
void test01()
{
    cout <<"test01 统计内置数据类型"<<endl;

    vector<int>v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(20);
    v.push_back(50);
    v.push_back(30);
    v.push_back(30);
    v.push_back(50);
    v.push_back(30);
    v.push_back(10);

    int num = count(v.begin(),v.end(),50);
    cout<<"数据为50的有： "<<num<<" 个"<<endl;

    num = count(v.begin(),v.end(),30);
    cout<<"数据为30的有： "<<num<<" 个"<<endl;
}

//2.统计自定义数据类型
// count(v.begin(),v.end(),value)
// value
// 可以是自定义类型数据全部如Person，也可以是自定义数据中的其中一个属性如Person.m_Name
// 或者Person.m_Age,都需要重载 == 操作符指定统计规则
class Person
{
    public:
        //可以按不同类型形参重载多个等号 == 运算符
        //1.按形参为Person重载==运算符
        bool operator==(Person p)
        {
            if(this->m_Name==p.m_Name && this->m_Age==p.m_Age)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        //2.按形参为string重载==运算符
        bool operator==(string bbb)
        {
            if(this->m_Name==bbb)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        //3.按形参为int重载==运算符
        bool operator==(int ages)
        {
            if(this->m_Age==ages)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        Person(string name,int age)
        {
            this->m_Name=name;
            this->m_Age=age;
        }
        
        string m_Name;
        int m_Age;
};

void test02()
{
    cout <<"test01 统计自定义数据类型"<<endl;
    
    Person p1("aaa",21);
    Person p2("bbb",23);
    Person p3("aaa",22);
    Person p4("ccc",20);
    Person p5("aaa",22);
    Person p6("bbb",21);
    Person p7("bbb",21);

    vector<Person>v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);
    v.push_back(p7);

    //统计与pp相同的数据有几个
    Person pp("bbb",21);
    int num=count(v.begin(),v.end(),pp);
    cout<<"与pp相同的数据 "<<num<<endl;

    // 统计name="bbb"的数据
    num =count(v.begin(),v.end(),"bbb");
    cout<<"name= bbb " <<num<<endl;

    // 统计age= 22 的数据
    num =count(v.begin(),v.end(),22);
    cout<<"age=22 " <<num<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    test01();
    test02();
    return 0;
}
