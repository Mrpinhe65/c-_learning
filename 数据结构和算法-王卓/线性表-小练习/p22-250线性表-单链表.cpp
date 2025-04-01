/*************************************************************************
    > File Name: p22-250线性表-单链表.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月02日 星期五 17时03分36秒
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
//自定义数据结构----自己需要存储的数据
typedef struct Student{ 
	string name;
	int ID;
	int age;
	float score;
}ElemType;

//单链表的存储结构----定义
typedef struct LNode  //声明结点的类型和指向结点的指针类型
{ 
	ElemType data; //结点数据域：data为需存储的数据，数据结构ElemType见前定义
	struct LNode *next; //结点的指针域
}LNode,*LinkList; //LinkList为指向结构体Lnode的指针类型

//LNode a==> a.data(数据域),a.next(指针域)
//*LinkList 为指向结构体本身的指针类型
//LNode *L==LinkList L;
//*Next和*LinkList区别？？好像是一样的？
//定义链表L：LinkList L;
//定义结点指针p：LNode *p==LinkList p;
//通常指向整个链表的用LinkList L 定义
//指向结点的指针用 LNode *p 定义

/*本例数据结构也可以一级定义
 typedef struct Student{
	char num[8];
	char num[8];
	int score;
	struct Student *next;
 }LNode,*LinkList;

//二级定义
typedef struct{
	char num[8];
	char num[8];
	int score;
}ElemType；

typedef struct Student{
	ElemType data;
	struct Student *next;
}LNode,*LinkList;
*/

//单链表初始化
int InitList(LinkList & L){
	L=new LNode;//或者L=(LinkList)malloc(sizeof(LNode));
	L->next=nullptr;
	cout<<L<<endl;
	return OK;
}

int ListEmpty(LinkList L) //空表返回1，非空返回0
{
	if(L->next) //非空
	{ 
		return 0;
	}
	return 1;
}

//销毁单链表L
void DestroyList_L(LinkList & L){
	LNode* p;//或LinkList p;
	while(L){
		p=L;
		L=L->next;
		delete p;
	}
}

//单链表L清空
int ClearList(LinkList &L){
	LNode *p,*q;//或LinkList p,q;
	p=L->next;//从头结点取得首元结点指针
	while(p){ //没到表尾
		q=p->next; //从本结点取得下一结点的(指针)地址
		delete p;
		p=q;
	}
	L->next=nullptr; //头结点指针域为空
	return OK;
}

//求单链表L的表长度
int ListLength(LinkList L){
	LNode *p;//或LinkList p;
	p=L->next;
	int length=0;
	while(p){ //没到表尾
		length++;
		p=p->next; //从本结点取得下一结点的(指针)地址
	}
	return length;
}

//取单链表中第i个元素
int GetElem(LinkList L,int i,ElemType &e){
	LNode *p,*q;
	p=L->next;
	int j=1;
	while(p && j<i){
		p=p->next;
		++j;
	}
	if(!p || j>i){
		return ERROR;
	}
	e=p->data;
	return OK;
}

//按值查找,返回所找结点的指针（地址）
LNode* LocateElem_L(LinkList L,ElemType e){
	LNode * p;
	p=L->next;
	while(p){
		if(p->data.name==e.name && p->data.ID==e.ID && p->data.age==e.age && p->data.score==e.score){//或重载==运算符：p->data==e
			return p;
		}
		p=p->next;
	}
	return nullptr;
}

//按值查找,返回所找结点的位置序号i
int PositionElem_L(LinkList L,ElemType e){
	LNode * p;
	p=L->next;
	int i=1;
	while(p){
		if(p->data.name==e.name && p->data.ID==e.ID && p->data.age==e.age && p->data.score==e.score){//或重载==运算符：p->data==e
			return i;
		}
		p=p->next;
		i++;
	}
	return 0;
}

//在第i结点前插入值为e的新结点
int InsertElem(LinkList &L,int i,ElemType e){
	LNode* p=L;
	int j=0;
	while(p && j<i-1){
		p=p->next;
		j++;
	}
	if(!p ||j>i-1){
		return ERROR;
	}
	LNode* s=new LNode;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;
}

//删除第i位置的结点
int ListDelete_L(LinkList &L,int i,ElemType &e){
	LNode* p=L;
	int j=0;
	while(p->next && j<i-1){ //寻找第i结点，并令p指向其前驱
		p=p->next;
		j++;
	}
	if(!(p->next)|| j>i-1){ //剔除不合理的位置
		return ERROR;
	}
	LNode* q=p->next; //临时保存被删除节点的地址以备delete
	p->next=q->next; //改变删除节点前驱几点的指针域指针
	e=q->data; //保存删除结点的数据域
	delete q; // 释放删除结点的空间
	return OK;
}

//头插法建立链表，从空链表L开始
void CreateList_H(LinkList &L,int n){
	/*此两句在初始化中，此处不需放置，程序适用性更好---已有或新建链表均可适用
	L=new LNode;
	L->next=nullptr;
	*/
	for(int i=n;i>0;i--){
		LNode* p=new LNode;
		cout<<"请输入姓名:";
		cin>>p->data.name;
		cout<<"请输入学号:";
		cin>>p->data.ID;
		cout<<"请输入年龄:";
		cin>>p->data.age;
		cout<<"请输入成绩:";
		cin>>p->data.score;
		p->next=L->next;
		L->next=p;
	}
}

//尾插法，
void CreateList_R(LinkList &L,int n){
	LNode* p_l=L;
	while(p_l){
		if(p_l->next){
			break;
		}
		p_l=p_l->next;
	}
	for(int i=n;i>0;i--){
		LNode* p=new LNode;
		cout<<"请输入姓名:";
		cin>>p->data.name;
		cout<<"请输入学号:";
		cin>>p->data.ID;
		cout<<"请输入年龄:";
		cin>>p->data.age;
		cout<<"请输入成绩:";
		cin>>p->data.score;
		p->next=L->next;
		L->next=p;
	}
}

int menu(LinkList &L){
	int flag;
	while(1){
		system("clear");
		cout<<"**********************************"<<endl;
		cout<<"*请选择需要的操作：              *"<<endl;
		cout<<"*[1]初始化链表    [2]是否空链表  *"<<endl;                                                  
		cout<<"*[3]链表头插法    [4]链表尾插法  *"<<endl;                                                
		cout<<"*[5]链表I位插值   [6]销毁链表    *"<<endl;                                                
		cout<<"*[7]清空链表      [8]销毁链表    *"<<endl;                                                
		cout<<"*[0]退出程序                     *"<<endl;                                                  
		cout<<"**********************************"<<endl;
		cin>>flag;
		switch(flag){
			case 0:
				system("clear");
				cout<<"程序运行结束,Bye！"<<endl;
				return 0;
			case 1:
				InitList(L); // 链表L初始化
				break;
			case 2:
				ListEmpty(L); //空表返回1，非空返回0
				break;
			case 3:
				//头插法建立链表
				int n;
				cout<<"请输入需要插入数据个数n ";
				cin>>n;
				cout<<endl;
				if(n!=0){
					CreateList_H(L,n); //头插法
				}
				break;
			case 4:  //尾插
				break;
			case 5: //I位插值
				//在第i结点前插入值为e的新结点
				int i_insert=1;
				ElemType e_insert;
				e_insert.name="aaa";
				e_insert.ID=1001;
				e_insert.age=21;
				e_insert.score=89;
				int flag=InsertElem(L,i_insert,e_insert);
				if(flag==OK){
					cout<<"第"<<i_insert<<"位数据插入成功"<<endl;
				}else{
					cout<<"第"<<i_insert<<"位数据插入失败"<<endl;
				}
	
				i_insert=2;
				e_insert.name="bbb";
				e_insert.ID=1002;
				e_insert.age=49;
				e_insert.score=96;
				flag=InsertElem(L,i_insert,e_insert);
				if(flag==OK){
					cout<<"第"<<i_insert<<"位数据插入成功"<<endl;
				}else{
					cout<<"第"<<i_insert<<"位数据插入失败"<<endl;
				}
				
				i_insert=3;
				e_insert.name="黄卫东";
				e_insert.ID=1003;
				e_insert.age=59;
				e_insert.score=98;
				flag=InsertElem(L,i_insert,e_insert);
				if(flag==OK){
					cout<<"第"<<i_insert<<"位数据插入成功"<<endl;
				}else{
					cout<<"第"<<i_insert<<"位数据插入失败"<<endl;
				}
		}
	}
}

int main(){
	LinkList L;
	menu(L);
	/*
	
	//删除第i位置的结点
	int i_delete=2;
	ElemType e_delete;
	ListDelete_L(L,i_delete,e_delete);
	cout<<"删除结点 "<<i_delete<<" 的数据为：姓名："<<e_delete.name<<",学号："<<e_delete.ID<<",年龄："<<e_delete.age<<",成绩："<<e_delete.score<<endl;

	cout<<ListEmpty(L)<<endl;//链表是否为空：1空，0非空
	
	int length=ListLength(L);//求单链表L的表长度
	cout<<"链表长度"<<length<<endl;


	//取单链表中第i个元素
	int i=3;
	ElemType e_i;
	GetElem(L,i,e_i);
	cout<<e_i.name<<e_i.ID<<e_i.age<<e_i.score<<endl;

	//按值查找,返回所找结点的指针（地址）
	ElemType e_locate;
	e_locate.name="Tom";
	e_locate.ID=1001;
	e_locate.age=19;
	e_locate.score=92;
	LNode* p_locate;
	p_locate=LocateElem_L(L,e_locate);

	//按值查找,返回所找结点的位置序号i
	ElemType e_position;
	e_position.name="Tom";
	e_position.ID=1001;
	e_position.age=19;
	e_position.score=92;
	int position= PositionElem_L(L,e_position);

	ClearList(L);//清空链表

	DestroyList_L(L);//销毁单链表L
	*/
	return 0;
}
