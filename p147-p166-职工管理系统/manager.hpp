#pragma once

class Manager:public Worker
{
	public:
		Manager(int id,string name,int did);
		void showInfo();
		string getDeptName();
};
