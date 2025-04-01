/*************************************************************************
    > File Name: p12-线性表及顺序存储.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月02日 星期三 08时12分55秒
 ************************************************************************/
/*
线性表 Linear List:由同类型数据元素构成有序序列的线性结构
元素个数称为线性表的长度
线性表没有元素时，称为空表
标的起始位置称 表头 表的结束位置称 表尾
抽象的描述
类型名称 线性表 List
数据对象集 线性表是n(n>=0)个元素构成的有序序列(a1,a2,...an)
操作集 线性表L 整数 i 表示位置 元素X ElementType
1. List MakeEmpty(); 初始化一个空线性表
2. ElementType FindKth(int K,List L);根据位序K，返回元素
3. int Find(ElementType X,List L);线性表L中，查找X第一次出现的位置
4. void insert(ElementType X,int i,List L);线性表中i前面插入元素X
5. void Delete(int i,List);删除指定位序i的元素；
6. int Length(List L);返回线性表的长度n

线性表的顺序存储
利用数组的连续存储空间顺序存放线性表的元素
typedef struct LNode *List;
struct LNode
{
	ElementType Data[MAXSIZE];//数据结构类型，可另外定义结构体
	int Last;
}
struct LNode L;
List ptrL;

访问下标为i的元素----L.Data[i] 或者 PtrL->Data[i]
线性表的长度： L.Last+1 或者 PtrL->Last+1
*/
#include<iostream>
using namespace std;

/*
1.数据结构定义
typedef struct LNode *List;
struct LNode
{
	ElementType Data[MAXSIZE];//数据结构类型，可另外定义结构体
	int Last;
}
struct LNode L;
List ptrL;

2.初始化(建立空的顺序表)
List MakeEmpty()
{
	List PtrL;
	PtrL=new List(sizeof(struct LNode));
	PtrL->Last=-1;
	return PtrL;
}

3.查找
int Find(ElementType X,List PtrL)
{
	int i=0;
	while(i<=PtrL->Last && PtrL->Data[i]!=X)
	{
		i++;
		if(i>PtrL->Last)
		{
			return -1;
		}
		return i;
	}
}
*/
