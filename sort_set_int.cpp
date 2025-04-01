#include <iostream>
#include <set>
using namespace std;

class MyCompare {
public:
    bool operator()(int v1, int v2) const {  // 添加 const 提高安全性
        return v1 > v2;
    }
};

void test01() {
    set<int, MyCompare> s2;

    s2.insert(10);
    s2.insert(40);
    s2.insert(20);
    s2.insert(30);
    s2.insert(50);

    // 使用 range-based for loop，更现代和简洁
    for (auto num : s2) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    test01();

    // 使用更跨平台的方式暂停程序，替换 system("pause")
    //cout << "Press Enter to continue..." << flush;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}


