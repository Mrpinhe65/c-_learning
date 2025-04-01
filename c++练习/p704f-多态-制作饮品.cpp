#include <iostream>
using namespace std;

class Drinking
{
public:
    // 煮水
    virtual void bol() = 0;
    // 冲泡
    virtual void brew() = 0;
    // 装杯
    virtual void inCap() = 0;
    // 辅料
    virtual void putSomething() = 0;

    void makeDrink()
    {
        bol();
        brew();
        inCap();
        putSomething();
    }
};

class Tea : public Drinking
{
public:
    // 煮水
    virtual void bol()
    {
        cout << "煮农夫山泉" << endl;
    }

    // 冲泡
    virtual void brew()
    {
        cout << "冲泡茶叶" << endl;
    }

    // 装杯
    virtual void inCap()
    {
        cout << "悬壶高冲装杯" << endl;
    }

    // 辅料
    virtual void putSomething()
    {
        cout << "加入枸杞" << endl;
    }
};

class Coffee : public Drinking
{
public:
    // 煮水
    virtual void bol()
    {
        cout << "煮纯净水" << endl;
    }

    // 冲泡
    virtual void brew()
    {
        cout << "冲泡咖啡" << endl;
    }

    // 装杯
    virtual void inCap()
    {
        cout << "倒入咖啡杯" << endl;
    }

    // 辅料
    virtual void putSomething()
    {
        cout << "加入牛奶" << endl;
    }
};

void makeDrinking(Drinking *abc)
{
    abc->makeDrink();
    delete abc;
}

void test01()
{
    makeDrinking(new Tea);

    cout << "==================" << endl;

    makeDrinking(new Coffee);
}

int main(int argc, char *argv[], char *envp[])
{
    test01();
    return 0;
}
