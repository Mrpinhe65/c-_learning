/*************************************************************************
    > File Name: p049-补-二维数组-两种动态定义方法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月03日 星期二 02时52分12秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

//第一种方法:此方法创建的动态二维数组 是 “连续数组 并且 固定列数”
void TestFunc(unsigned int n)
{
	unsigned int i, j;
	//创建一个固定列为 5 大小的二维数组
	int(*array_two)[5] = new int[n][5];
	//赋值操作和操作正常二维数组一样
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			array_two[i][j] = i * 5 + j;
		}
	}
	//访问数据
	cout << array_two[2][3] << endl;
	//回收方法和普通数组一样
	delete[] array_two;
}
//第二种方法:此方法创建的动态二维数组 是 “非连续数组”
void TestFunc_printer(unsigned int Height, unsigned int Width)
{
	unsigned int i, j;
	//用二级指针创建 行 动态数组(也就是每一行的头部)
	int **array_two = new int *[Height];
	//循环 行 从头到尾赋值 列
	for (i = 0; i < Height; i++)
	{
		//一维数组创建 列 动态数组(也就是给每一行分配多少列)
		array_two[i] = new int[Width];
	}

	//访问方法
	for (i = 0; i < Height; i++)
	{
		for (j = 0; j < Width; j++)
		{
			//赋值
			array_two[i][j] = i * 5 + j;
		}
	}

	//此方法不能直接访问数据
	//cout << array_two[3][6] << endl;

	//二维动态数组的 访问方法
	for (i = 0; i < Height; i++)
	{
		for (j = 0; j < Width; j++)
		{
			if (i == 2 && j == 6)
			{
				//打印指定的值
				cout << array_two[i][j] << endl;
			}
		}
	}
	//删除方法
	//先删除 每一行中的每一列
	for (i = 0; i < Height; i++)
	{
		//删除一维数组
		delete[] array_two[i];
	}

	//此处直接删除 行 即可
	delete[] array_two;
}
int main()
{
	TestFunc(6);//创建一个 array_two[6][5] 的固定列的动态二维数组
	TestFunc_printer(3,9);//创建一个 array_two[3][9] 的非连续动态二维数组
	return 0;
}
