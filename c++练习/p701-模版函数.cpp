#include <iostream>
#include <string>

using namespace std;

template <typename T>
void mySwap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << a << " " << b << endl;
}

int main(int argc, char *argv[], char *envp[])
{
    test01();
    return 0;
}