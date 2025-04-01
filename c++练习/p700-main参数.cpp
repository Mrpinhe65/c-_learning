/*
 * @Author: MRpinhe huangpinhe65@gmail
 * @Date: 2025-02-18 10:42:47
 * @LastEditors: MRpinhe huangpinhe65@gmail
 * @LastEditTime: 2025-03-14 16:40:19
 * @FilePath: /Desktop/c++/c++练习/p700-main参数.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(int argc, char *argv[], char *envp[])
{
    // argc 记录启动程序时 启动的程序名及后面跟着的参数的总个数
    cout << "argc= " << argc << endl;
    // argv[argc] 记录着启动的程序名及后面跟着的参数
    // 如 ./a.out hwd first 2
    // 则 argc= 4
    // 第一个 argv[0]=a.out
    // 第二个 argv[1]=hwd
    // 第三个 argv[2]=first
    // 第四个 argv[3]=2
    for (int i = 0; i < argc; i++)
    {
        cout << "Argv[" << i << "]= " << argv[i] << " " << typeid(argv[i]).name() << endl;
    }
    int id = stoi(argv[3]);
    cout << id << " " << typeid(id).name() << endl;
    // 数字型字符串转数字
    //  stoi stol stof stod stold
    string pi = "3.1415926";
    cout << "pi= " << stod(pi) << endl;
    return 0;
}
