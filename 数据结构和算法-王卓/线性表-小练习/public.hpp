/*************************************************************************
    > File Name: public.hpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月25日 星期四 09时32分07秒
 ************************************************************************/
#include<iostream>
#include<stdlib.h>  //malloc需要的头文件
#include<fstream>
using namespace std;

//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
// Status 是函数的类型 其值是函数结果状态代码
//typedef int Status;
//typedef char ElemType;

typedef struct{
	char num[8];
	char age[8];
	int score;
}ElemType;

typedef struct Student{
	ElemType data;
	struct Student *next;
}LNode,*LinkList;

typedef struct DuLNode{
	ElemType data;
	struct DuLNode *prior,*next;
}DuLNode,*DuLinkList;
