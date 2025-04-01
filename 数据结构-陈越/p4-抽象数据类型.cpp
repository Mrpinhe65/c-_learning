/*************************************************************************
    > File Name: p4-抽象数据类型.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月01日 星期二 16时36分10秒
 ************************************************************************/
/*
抽象数据类型 Abstract Data Type
数据对象集
数据集合相关联的操作集

抽象：描述数据类型的方法不依赖于具体实现
与存放数据的机器无关
与数据存储的物理结构无关
与实现操作的算法和编程语言均无关

只描述数据对象的相关操作集"是什么"，并不涉及"如何做到"的问题

例子：矩阵的抽象数据类型定义
类型名称 矩阵 Matrix
数据对象集 一个M*N的矩阵A[M*N]=a[ij](i=1,...M;j=i,...N)
由M*N个三元组<a,i,j>构成，其中a是矩阵元素的值，i是元素所在行，
j是元素所在的列。

操作集：对于任意矩阵A、B、C，以及整数i、j、M、N
Matrix Greate(int M,int N):返回一个M*N的空矩阵
int GetMaxRow(Matrix A):返回矩阵A的总行数
int GetMaxCol(Matrix A):返回矩阵A的总列数
ElementType GetEntry(Matrix A,int i,int j):返回矩阵A的第i行，第j列的元素
Matrix Add(Matrix A,Matrix B):如何A和B行列数一致，则返回矩阵C=A+B,否则返回错误标志
Matrix Multiply(Matrix A,Matrix B):如何A和B行列数一致，则返回矩阵C=A*B,否则返回错误标志

*/
