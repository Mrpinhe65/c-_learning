#include <iostream>
using namespace std;

int g_a = 10;

void func()
{
    int *p = new int(10);
    cout << "开辟的堆区地址" << p << endl;
    cout << "指针地址" << &p << endl;
    return;
}

int main()
{
    func();
    cout << "全局区地址" << &g_a << endl;

    // 创建堆区数组，和赋值
    int *p = new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[9] << endl;

    return 0;
}