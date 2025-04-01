/*
二元谓词

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class MyCompare
{
public:
    // bool operator()(int val1, int val2) // ok
    // bool operator()(int &val1, int &val2) // ok
    // bool operator()(const int &val1, const int &val2) // ok
    // bool operator()(const int &val1, const int &val2) const // ok
    // bool operator()(int &val1, int &val2) const // ok
    bool operator()(int val1, int val2) const // ok
    {
        return val1 > val2;
    }
};

// 全局函数 伪函数
bool compare(int v1, int v2) // ok
// bool compare(int &v1, int &v2) // ok
// bool compare(const int &v1, const int &v2) // ok
{
    return v1 > v2;
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);
    v.push_back(30);

    // 排序
    sort(v.begin(), v.end());

    // 遍历输出vector容器内容
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 使用函数对象（仿函数）改变排序规则为从大到小
    // sort(v.begin(), v.end(), MyCompare()); // ok;  // 函数对象（仿函数）MyCompare() 要加括号

    // 使用全局仿函数改变排序规则为从大到小
    sort(v.begin(), v.end(), compare); // ok;  // 全局函数仿函数MyCompare  不要加括号

    // 遍历输出vector容器内容
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[], char *envp[])
{
    test01();
    return 0;
}