/*
常用排序算法
sort            // 对容器内元素进行排序
random_shuffle  // 洗牌 指定范围内的元素随机调整次序
merge           // 容器元素合并
reverse         // 反转指定范围内的元素
*/

// sort(iterator beg,iterator end,_pred)

#include <iostream>

#include <algorithm>
#include <numeric>
#include <functional>

#include <vector>

using namespace std;

class SortByClass
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

bool sortByFunc(int v1, int v2)
{
    return v1 > v2;
}

void test01()
{
    vector<int> v = {10, 30, 50, 20, 70, 40};

    // 利用sort进行默认升序
    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // 利用仿函数或全局函数进行自定义排序
    // sort(v.begin(), v.end(), SortByClass()); // ok
    // sort(v.begin(), v.end(), sortByFunc); // ok

    // 利用内置函数对象greater，其头文件<functional>
    // sort(v.begin(), v.end(), greater<int>()); // ok

    // 利用lambda进行自定义排序
    sort(v.begin(), v.end(), [](int a, int b)
         { return a > b; });

    // 遍历排序后的容器
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
