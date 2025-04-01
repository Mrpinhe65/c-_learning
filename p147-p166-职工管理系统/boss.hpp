#pragma once

class Boss:public Worker
{
	public:
		Boss(int id,string name,int did);
		void showInfo();
		string getDeptName();
};
