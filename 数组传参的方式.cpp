/*************************************************************************
    > File Name: 数组传参的方式.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月12日 星期五 08时08分51秒
 ************************************************************************/
#include <iostream>
using namespace std;

//数组作为函数参数传递，形参接收时数组大小会丢失，需要同时传数组大小
void printArray_arr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//在这个例子中，printArray函数接受一个引用到大小为5的整型数组的引用。
//这种方式可以避免数组大小信息的丢失，但是数组必须在函数调用前已经声明并且其大小是已知的。
void printArray_7(int (&arrRef)[5]) {
    for (int i = 0; i < 5; ++i) {
        cout << arrRef[i] << " ";
    }
    cout << endl;
}
    
//在这个例子中，printArray函数接受一个指向整型的指针arrPtr和一个表示数组大小的整型变量size。
//这种方式与传递数组类似，但是使用指针可以提供更多的灵活性，例如可以传递数组的一部分
void printArray_8(int *arrPtr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arrPtr[i] << " ";
    }
    cout << endl;
}

int main() {
 
    int myArray1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(myArray1) / sizeof(myArray1[0]);
    printArray_arr(myArray1, size1);
    
    int myArray2[5] = {1, 2, 3, 4, 5};
    printArray_7(myArray2);
    
    int myArray3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(myArray3) / sizeof(myArray3[0]);
    printArray_8(myArray3, size3);
    
    
    return 0;
}
