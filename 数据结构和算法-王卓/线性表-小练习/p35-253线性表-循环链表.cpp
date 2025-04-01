/*************************************************************************
    > File Name: p35-253线性表-循环链表.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月22日 星期四 08时07分33秒
 ************************************************************************/
#include"public.hpp"


//带尾指针循环链表Ta、Tb的合并
//假设Ta、Tb都是非空单循环链表
LinkList Connet(LinkList Ta,LinkList Tb){
	LNode* p=Ta->next; //p存Ta的表头结点
	Ta->next=Tb->next->next; //Tb表头连结Ta表尾
	delete Tb->next; //删除Tb表头结点
	Tb->next=p; //Tb最后一个数据的指针指向Ta表头结点
	return Tb;
}

int main(){
	
	return 0;
}
