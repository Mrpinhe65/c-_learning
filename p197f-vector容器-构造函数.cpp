/*
vector 数据结构和数组非常相似，也称为单端数组
vector 与普通数组的区别：数组是静态空间，vector可以动态扩展
动态扩展：并不是在原空间之后续接新空间，而是找更大的空间，然后将原数据拷贝过去，再释放原空间

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v)
{
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++) //ok
    for (auto it = v.begin(); it != v.end(); it++) // ok c++11

    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1; // 默认构造，无参构造
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 通过区间方式进行构造
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    // n 个 elem 方式构造
    vector<int> v3(10, 100);
    printVector(v3);

    // 拷贝构造
    vector<int> v4(v3);
    printVector(v4);
}

int main()
{
    test01();
    return 0;
}
