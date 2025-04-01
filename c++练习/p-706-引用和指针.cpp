#include <iostream>
using namespace std;

int main()
{
#if 0
    int a = 10;
    int *p = &a;
    int &b = a;

    *p = 20;
    cout << "a= " << a << " *p=" << *p << " b=" << b << endl;
    cout << &a << " " << p << " " << &b << endl;
    b = 30;
    cout << "a= " << a << " *p=" << *p << " b=" << b << endl;
#endif

#if 1
    int array[5];
    int *p = array;
    // 数组的引用
    int(&q)[5] = array;
    cout << "sizeof(array)= " << sizeof(array) << " sizeof(p)=" << sizeof(p) << " sizeof(q)=" << sizeof(q) << endl;
#endif

    int &&c = 20;
    const int &a = 20;
    cout << &c << endl;
    cout << &a << endl;

    return 0;
}