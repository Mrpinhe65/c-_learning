// workerManager.hpp
#pragma once
#include"worker.hpp"
#include"employee.hpp"
#include"manager.hpp"
#include"boss.hpp"

#include<fstream>
#define FILENAME "empFile.txt"

//类的声明
class WorkerManager
{
	public:
		//构造函数声明，实现在类外----在cpp文件中
		WorkerManager();
		
		//展示操作系统菜单
		void show_Menu();	
		
		//退出系统函数
		void exitSystem();

		//记录职工人数
		int m_EmpNum;

		//职工数组指针
		Worker ** m_EmpArray;
		
		//添加职工
		void Add_Emp();

		//保存文件
		void save();

		//文件是否为空的标志 属性
		bool m_FileIsEmpty;

		//统计文件中的人数
		int get_EmpNum();

		//初始化员工
		void init_Emp();

		//显示员工信息
		void show_Emp();

		//删除员工信息
		void del_Emp();

		//判断职工是否存在，存在就返回所在位置索引，不存在就返回-1
		int isExist(int id);

		//修改职工信息
		void mod_Emp();

		//查找员工信息
		void find_Emp();

		//按职工编号排序
		void sort_Emp();

		//清空文件数据
		void clean_File();

		//析构函数声明，实现在类外----在cpp文件中
		~WorkerManager();
};

