#include <iostream>
#include <vector>
#include <chrono>

class MyClass
{
public:
    std::vector<int> vec;

    MyClass(int n) : vec(n, 0) {}

    // 拷贝赋值
    MyClass &operator=(const MyClass &other)
    {
        vec = other.vec;
        return *this;
    }

    // 移动赋值
    MyClass &operator=(MyClass &&other) noexcept
    {
        vec = std::move(other.vec); // 移动资源
        return *this;
    }
};

int main()
{
    // 使用拷贝赋值
    MyClass obj1(1000000);
    MyClass obj2(1000000);
    auto start = std::chrono::high_resolution_clock::now();
    obj2 = obj1; // 拷贝赋值
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Copy assignment took: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds.\n";

    // 使用移动赋值
    MyClass obj3(1000000);
    MyClass obj4(1000000);
    start = std::chrono::high_resolution_clock::now();
    obj4 = std::move(obj3); // 移动赋值
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Move assignment took: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds.\n";
}
