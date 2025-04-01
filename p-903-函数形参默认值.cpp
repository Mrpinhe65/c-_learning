#include <iostream>
using namespace std;

class Person
{
public:
    int m_age;
    string m_name;
};

void func(int a = 5, int b = 10)
{
    cout << "a " << a << endl;
    cout << "b " << b << endl;
}

int main()
{
    func(1, 2); // 打印 1，2
    func();     // 打印5，10
    return 0;
}