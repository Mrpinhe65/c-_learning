#include<iostream>
#include<algorithm>
using namespace std;

//pair对组的创建
// pair<type, type> p (value1, value2);
// pair<type, type> p = make_pair(value1, value2);

void test01()
{
    //第一种方式
    pair<string, int> p ("Tom", 20);
    cout << "Name: " << p.first << endl << "Age: " << p.second << endl;
    
    //第二种方式
    pair<string, int> p2 = make_pair("Jerry",21);
    cout << "Name: " << p2.first << endl << "Age: " << p2.second << endl;
}

int main()
{
    test01();
    return 0;
}
