/*************************************************************************
    > File Name: 线性表定义.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月25日 星期四 09时32分07秒
 ************************************************************************/
#include<iostream>
#include<stdlib.h>  //malloc需要的头文件
using namespace std;

#define MAXSIZE 1000    //多项式可能达到的最大长度

//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
// Status 是函数的类型 其值是函数结果状态代码
typedef int Status;
typedef char ElemType;

typedef struct {		//多项式非零项的定义
	float p;			//系数
	int e;				//指数
}Polynomial;

// 顺序表的结构创建一
typedef struct{
	Polynomial elem[MAXSIZE];    //存储空间的基地址
	int lenght;			 //多项式中当前项的个数	
}SqList;                //多项式的顺序存储结构类型为SqList

/*
// 顺序表的结构创建二
typedef struct{
	Polynomial *elem;
	int lenght;
}SqList

createList(){
	SqList L;
	L.elem=(Polynomial*)malloc(sizeof(Polynomial)*MAXSIZE);
}
*/

void test(){
	Polynomial p;
	SqList L;
	cout<<"Polynomial size=="<<sizeof(p)<<endl;
	cout<<"SqList size=="<<sizeof(L)<<endl;
}

int main(){
	test();
	return 0;
}
