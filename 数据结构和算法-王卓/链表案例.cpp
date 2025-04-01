/*************************************************************************
    > File Name: 链表案例.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月26日 星期五 07时51分05秒
 ************************************************************************/
#include"数据结构算法头文件.hpp"

typedef struct Stendent{
	string Name;
	string ID;
	int Score;
}ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

//初始化:生成新结点，用头指针L指向头结点；将头结点的指针域置空。
int InitList_L(LinkList &L){
	L=new LNode; //C++
				 //C: L=(LinkList)malloc(sizeof(LNode));
	L->next=nullptr; //或C：L->next=NULL;
	cout<<"L="<<L<<",L->next="<<L->next<<endl;
	return OK;	
}
//判断是否为空链表
int ListEmpty(LinkList L){
	if(L->next){
		return 0;
	}
	return 1;
}

//单链表销毁：从头指针开始，依次释放所有结点
int DestroyList_L(LinkList &L){
	LNode *p; //或 LinkList p;
	while(L){
		p=L;
		L=L->next;
		delete p;
	}
	return OK;
}

//清空链表：链表仍存在，链表中无元素成为空链表
//思路：依次释放所有结点，并将头结点指针域设置为空
int ClearList(LinkList &L){
	LNode *p,*q; //或 LinkList p,q;
	p=L->next;
	while(p){
		q=p->next;
		delete p;
		p=q;
	}
	L->next=nullptr; //C: L->next=NULL;
	return OK;
}

//求链表表长
int ListLenght_L(LinkList L){
	LinkList p;
	p=L->next;
	int i=0;
	while(p){
		i++;
		p=p->next;
	}
	return i;
}

//单链表取值，取出第 i 位的元素
int GetElem_L(LinkList L,int i,ElemType &e){
	LNode *p=L->next;
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

//按值 e 查找，返回地址 p
LNode *LocateElem_L_Pointer(LinkList L,ElemType e){
	LNode *p=L->next;
	while(p && p->data.Score!=e.Score){  //此处数据结构复杂的话，需要重载关系运算符
		p=p->next;
	}
	return p;
}

//按值 e 查找，返回位置序号 j
int LocateElem_L_Pos(LinkList L,ElemType e){
	LNode *p=L->next;
	int j=1;
	while(p && p->data.Score!=e.Score){  //此处数据结构复杂的话，需要重载关系运算符
		p=p->next;
		j++;
	}
	if(p){
		return j;
	}
	return 0;
}

//在L中第 i 个元素之前插入数据 e
int ListInsert_L(LinkList &L,int i,ElemType e){
	cout<<"int ListInsert========================"<<endl;
	LinkList p=L;
	int j=1;
	while(p && j<i-1){
		p=p->next;
		++j;
	}
	if(!p || j>i-1){
		return ERROR;
	}
	LinkList s=new LNode;
	s->data=e;
	s->next=p->next;
	cout<<"p->next"<<p->next<<endl;
	return OK;
}

//将链表L中第 i 个元素删除
int ListDelete_L(LinkList &L,int i,ElemType &e){
	LinkList p=L;
	int j=0;
	while(p->next && j<i-1){
		p=p->next;
		++j;
	}
	if(!(p->next) || j>i-1){
		return ERROR;
	}
	LinkList q=p->next;
	p->next=q->next;
	e=q->data;
	delete q;
	return OK;
}

int main(){
	
	LinkList L; //建立链表
	
	InitList_L(L); //初始化
	
	ListEmpty(L);//判断是否为空链表
	
	L->data.Name="HWD";
	L->data.ID="001";
	L->data.Score=89;
	cout<<L->data.Name<<","<<L->data.ID<<","<<L->data.Score<<endl;
	ListInsert_L(L,1,{"HWD","001",89});

	return 0;
}
