/*************************************************************************
    > File Name: p11-多项式表示.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月01日 星期二 19时55分24秒
 ************************************************************************/
/*
方法1：顺序存储结构直接表示各项
a[i]:项x^i的系数a[i]
例如： f(x)=4x^5-3x^2+1
表示成
下标i   0   1    2     3    4    5 ...
a[i]    1   0   -3     0    0    4
f(x)=  1x^0    -3x^2            4x^5

如何表达多项式 f(x)=x+3x^2000 ?

方法2：顺序存储结构表示非零项
每个非零项a[i]x^i 涉及两个信息，系数a[i]和x的指数i
可以将一个多项式看成是一个(a[i],i)二元的组合
用结构数组表示：数组分量是由系数a[i]、指数i著称的结构，对应一个非零项
例如：
P[1](x)=9x^12+15x^8+3x^2 和 P[2](x)=26x^19-4x^8-13x^6+82

下标     1      1     2        下标    0     1    2    3
系数a[i] 9     15     3    系数a[i]   26    -4   -13   82
指数i    12     8     2       指数i   19     8    6    0

每一项的二维数组表示形式：(a[i],i)

相加过程：从头循环比较
1.x的指数相同项，系数相加
2.x的指数不相同，先把指数大的放入新数组
3.代码实现：通过循环比较完成
P1:         (9,12),(15,8),        (3,2)
p2: (26,19),       (-4,8),(-13,6),      (82,0)
P3: (26,19),(9,12),(11,8),(-13,6),(3,2),(82,0) 

P3(x)=26x^19+9x^12 +11x^8  -13x^6 +3x^2 +82x^0

//方法3：链表结构储存非零项
链表中每个节点存储多项式中的一个非零项
包括---系数---指数---指针域
	   coef   expon  link

数据结构：
typedef struct ployNode * ploynomial;
struct PloyNode
{
	int coef;
	int expon;
	ploynomial link;
};


P[1](x)=9x^12+15x^8+3x^2 和 P[2](x)=26x^19-4x^8-13x^6+82
链表表示简图如下：
P[1](x)-->9|12|link-->15|8|link-->3|2|nullptr|
P[2](x)-->26|19|link-->(-4)|8|link-->(-13)|6|link-->82|0|nullptr|

*/ 

#include<iostream>
using namespace std;

int getArrayM(int a,int sizeA,int b,int sizeB)
{
	cout<<"In function"<<endl;
	return 0;
}

int main()
{
	const int N=2;
	int p1[3][N]={{9,12},{15,8},{3,2}};
	int m1=sizeof(p1)/sizeof(p1[0]);
	cout<<sizeof(p1)<<" "<<sizeof(p1[0])<<" "<<m1<<endl;
	int p2[4][N]={{26,19},{-4,8},{-13,6},{82,0}};
	int m2=sizeof(p2)/sizeof(p2[0]);
	cout<<sizeof(p2)<<" "<<sizeof(p2[0])<<" "<<m2<<endl;
	//int m=getArrayM(p1,p2);
	return 0;
}
