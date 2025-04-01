#include <iostream>
#include <unordered_map>

int main()
{
    // 创建一个哈希表
    std::unordered_map<std::string, int> hashMap;

    // 插入键值对
    hashMap["apple"] = 10;
    hashMap["banana"] = 20;
    hashMap["orange"] = 30;
    hashMap["tomato"] = 40;

    // 查找键 "apple"
    // std::cout << "apple: " << hashMap["apple"] << std::endl;

    // 删除键 "banana"
    // hashMap.erase("banana");

    // 遍历哈希表
    for (const auto &pair : hashMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
