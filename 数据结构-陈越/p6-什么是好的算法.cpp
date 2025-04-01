/*************************************************************************
    > File Name: p6-什么是好的算法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月01日 星期二 17时14分51秒
 ************************************************************************/
/*
什么是好的算法？
1.空间复杂度S(n) ---- 根据算法写成的程序在执行时占用存储单元的长度。这个长度往往与输入数据的规模有关。空间复杂度过高可能导致使用内超限，造成程序非正常中断。
2.时间复杂度T(n) ---- 根据算法写成的程序在执行时耗费时间的长度。这个长度往往也与输入数据的规模有关。时间复杂度过高的低效算法可能导致我们在有生之年都等不到运行结果。

在分析一般算法的效率时，经常关注下面两种复杂度
1.最坏情况复杂度T[worst](n)
2.平均复杂度T[avg](n)
*/

#include<iostream>
using namespace std;

void recursionPrintN(int n);

int main()
{
	int n;
	cout<<"请输入要打印的整数序列最大值n:";
	cin>>n;
	recursionPrintN(n);
	cout<<endl;
	return 0;
}

void recursionPrintN(int n)
{
	if(n<0)
	{
		return;
	}
	recursionPrintN(n-1);
	cout<<n<<" ";
}

