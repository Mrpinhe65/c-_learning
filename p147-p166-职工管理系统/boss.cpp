/*************************************************************************
    > File Name: boss.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月26日 星期四 21时11分53秒
 ************************************************************************/
#pragma once
#include"boss.hpp"
Boss::Boss(int id,string name,int did)
{
	this->m_Id=id;
	this->m_Name=name;
	this->m_DeptId=did;
}

void Boss::showInfo()
{
	cout<<"职工编号："<<this->m_Id<<"\t职工姓名："<<this->m_Name<<"\t岗位："<<this->getDeptName()<<endl;
}

string Boss::getDeptName()
{
	return "老板";
}
