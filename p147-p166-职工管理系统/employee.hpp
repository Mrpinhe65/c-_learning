#pragma once

class Employee:public Worker
{
	public:
		Employee(int id,string name,int did);
		void showInfo();
		string getDeptName();
};
