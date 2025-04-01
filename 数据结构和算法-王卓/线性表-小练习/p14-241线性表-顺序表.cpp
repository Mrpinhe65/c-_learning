/*************************************************************************
    > File Name: P14-241线性表-顺序存储.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月01日 星期四 09时46分17秒
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

#include<stdlib.h>

//Pn(x)=p1x^e1+p2x^e2+...+pmx^em

#define LIST_INIT_SIZE 1000 //线性表储存空间初始分配量

typedef struct{ // 需要存储的数据的结构
	string name; //名字
	int age; //年龄
}ElemType;

typedef struct{ //线性表的定义
	ElemType *elem;// 储存空间的基地址 ElemType为自定义的数据结构
	int length; //当前长度
}SqList;//多项式的顺序存储结构类型为SqList

int InitList_Sq(SqList &L) //初始化线性表SqList（参数--引用）
{
	//L.elem=(ElemType*)malloc(sizeof(ElemType)*LIST_INIT_SIZE);
	L.elem=new ElemType[LIST_INIT_SIZE];
	if(!L.elem){
		exit(OVERFLOW);
	}
	L.length=0;
	return OK;
}

//销毁线性表L
void DestroyList(SqList & L){
	if(L.elem){
		delete[] L.elem;
	}
}

//清空线性表L
void ClearList(SqList & L){
	L.length=0; //线性表长度置为0
}

//取得线性表L的长度
int GetLength(SqList & L){
	return L.length;
}

//判断线性表L是否为空
int IsEmpty(SqList & L){
	if(L.length==0){
		return TRUE; 
	}
	return FALSE;
}

//顺序表取值：取得位置i的数据
int GetElem(SqList &L,int i,ElemType &e){
	if(i<1||i>L.length){
		return ERROR;
	}
	e=L.elem[i-1];
	return OK;
}

//顺序查找
int LocateElem(SqList L,ElemType e){
	for(int i=0;i<L.length;i++){
		//if(L.elem[i]==e) //此处需要重载运算符 ==，或者逐个元素比较如下
		if(L.elem[i].name==e.name && L.elem[i].age==e.age)
		{
			return i+1;
		}
	}
	return 0;
}

//顺序表的插入
int ListInsert_Sq(SqList & L,int i,ElemType e_insert){
	if(i<1|| i>L.length+1){
		return ERROR;
	}
	if(L.length==LIST_INIT_SIZE){
		return ERROR;
	}
	for(int j=L.length-1;j>=i-1;j--){
		L.elem[j+1]=L.elem[j];
	}
	L.elem[i-1]=e_insert;
	L.length++;
	return OK;
}

//顺序表删除元素，返回删除的值
int ListDelete_Sq(SqList & L,int i,ElemType & e_delete){
	if(i<1|| i>L.length){
		return ERROR;
	}
	e_delete=L.elem[i-1];
	for(int j=i-1;j<=L.length;j++){
		L.elem[j]=L.elem[j+1];
	}
	L.length--;
	return OK;
}


//遍历顺序表
void ForEach(SqList & L){
	for(int i=1;i<=L.length;i++){
		cout<<"序号："<<i<<",name："<<L.elem[i-1].name<<",年龄："<<L.elem[i-1].age<<endl;
	}
}

/* 未调试通过
//顺序表--结构体--储存为文件
int AddInFile(SqList & L){
	ofstream outFile("SqList.dat","b");
	if(!outFile){
		cout<<"The File Open ERROR"<<endl;
		return ERROR;
	}
	outFile.write(L,sizeof(L)*L.length);
	outFile.close();
}

//从文件中读取顺序表---结构体
void ReadFromFile(){
	
}
*/

int main(){
	//采用定义普通变量L的形式
	SqList L;
	InitList_Sq(L);
	cout<<L.length<<endl;
	L.elem[0].name="Tom";
	L.elem[0].age=16;
	L.length++;
	cout<<L.length<<endl;
	L.elem[1].name="John";
	L.elem[1].age=19;
	L.length++;
	cout<<L.length<<endl;
	L.elem[2].name="Rose";
	L.elem[2].age=18;
	L.length++;
	cout<<L.length<<endl;
	cout<<L.elem[0].name<<endl;
	cout<<L.elem[0].age<<endl;
	cout<<L.elem[1].name<<endl;
	cout<<L.elem[1].age<<endl;
	
	cout<<"数据长度="<<GetLength(L)<<endl;
	
	ElemType e;//线性表存储的数据结构
	GetElem(L,1,e);//取得位置i的数据
	cout<<e.name<<endl;
	cout<<e.age<<endl;
	
	//顺序查找元素
	ElemType e_find;
	e_find.name="Rose";
	e_find.age=18;
	int index=LocateElem(L,e_find);//顺序查找e---e.name,e.age
	cout<<"在第 "<<index<<" 位找到数据e_find"<<endl;
	
	//插入元素
	ElemType e_insert;
	e_insert.name="huangweidong";
	e_insert.age=59;
	int i_insert=1;
	int flag=ListInsert_Sq(L,i_insert,e_insert);
	if(flag==OK){
		cout<<"insert NO "<<i_insert<<" Done!"<<endl;
	}

	e_insert.name="liuxiaoli";
	e_insert.age=56;
	i_insert=5;
	flag=ListInsert_Sq(L,i_insert,e_insert);
	if(flag==OK){
		cout<<"insert NO "<<i_insert<<" Done!"<<endl;
	}
	
	e_insert.name="黄林斌";
	e_insert.age=48;
	i_insert=5;
	flag=ListInsert_Sq(L,i_insert,e_insert);
	if(flag==OK){
		cout<<"insert NO "<<i_insert<<" Done!"<<endl;
	}
	
	e_insert.name="刘 肃";
	e_insert.age=36;
	i_insert=2;
	flag=ListInsert_Sq(L,i_insert,e_insert);
	if(flag==OK){
		cout<<"insert NO "<<i_insert<<" Done!"<<endl;
	}
	
	//遍历顺序表
	ForEach(L);
/*
	//删除第i元素，返回被删除的元素
	int i_delete=2;
	ElemType e_delete;
	ListDelete_Sq(L,i_delete,e_delete);
	cout<<"删除第 "<<i_delete<<" 位元素，name="<<e_delete.name<<", age="<<e_delete.age<<endl;
*/
	system("clear");
	//遍历顺序表
	ForEach(L);

/* 未调试通过
	//存储顺序表
	AddInFile(L);
	//读取顺序表
	ReadFromFile(L);
*/

	ClearList(L); //清空线性表L
	DestroyList(L); //销毁线性表L

	return 0;
}


