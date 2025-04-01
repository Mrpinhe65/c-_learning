/*
list 反转和排序
reverse();	//反转
sort();		//链表排序

所有不支持随机访问迭代器的容器，不能使用标准算法
XXX：sort(L.begin(), L.end());全局函数形式不可用
不支持随机访问迭代器的容器，内部会提供对应算法，属于成员函数
OK：L.sort(); 可用
*/

#include <iostream>
#include <list>
// #include<algorithm>
using namespace std;

// 排序算法回调函数
bool myCompareByFunc(int v1, int v2)
{
    // 降序 让 第一个形参 > 第二个形参 并并返回即可
    return v1 > v2;
}

class MyCompareByClass
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

void printList(const list<int> &L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> L;
    L.push_back(20);
    L.push_back(30);
    L.push_back(10);
    L.push_back(50);
    L.push_back(40);

    cout << "反转操作前" << endl;
    printList(L);

    // 反转操作
    L.reverse();
    cout << "反转操作后" << endl;
    printList(L);

    // 排序 默认升序排序
    L.sort();
    cout << "排序操作后:默认升序排序" << endl;
    printList(L);

    // 排序 降序
    // 使用回调函数 myCompare
    L.sort(myCompareByFunc);
    cout << "排序 降序 使用回调函数 myCompare " << endl;
    // 使用仿函数 MyCompareByclass
    L.sort(MyCompareByClass());
    cout << "排序 降序 使用回调函数 myCompare " << endl;

    printList(L);
}

int main()
{
    test01();
    return 0;
}
