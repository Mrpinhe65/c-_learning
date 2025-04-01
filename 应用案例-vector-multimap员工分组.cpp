/*************************************************************************
    > File Name: 应用案例-vector-multimap员工分组.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月21日 星期日 16时22分24秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<map>
#include<ctime>
#include<string>
using namespace std;

/*
 十个员工分组到三个部门：策划、美术、研发
 员工信息：姓名，工资
 随机给员工分配部门和工资
 通过multimap进行信息插入 Key部门编号 value员工
 分部门显示员工信息
 */

class Worker{
	public:
		string m_Name;
		int m_Salary;
};

void createWorker(vector<Worker>&v){
	string nameSeed="ABCDEFGHIJ";
	for(int i=0;i<10;i++){
		Worker worker;
		worker.m_Name="员工";
		worker.m_Name+=nameSeed[i];
		worker.m_Salary=rand()%10001+10000;
		//将员工放到vector
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for(vector<Worker>::iterator it=v.begin();it!=v.end();it++){
		//产生随机的部门编号1，2，3
		int deptId=rand()%3+1;
		//将员工插入到分组中multimap
		m.insert(make_pair(deptId,*it));
	}
}

void showWorkerByGroup(multimap<int,Worker>&m){
	cout<<"全部员工========================="<<endl;
	for(multimap<int,Worker>::iterator it=m.begin();it!=m.end();it++){
		cout<<"部门="<<(*it).first<<"，姓名="<<it->second.m_Name<<"，工资="<<it->second.m_Salary<<endl;
	}

	cout<<"策划部门=========================="<<endl;
	multimap<int,Worker>::iterator pos=m.find(1);
	int count=m.count(1);
	int index=0;
	for(;pos!=m.end() && index<count;pos++,index++){
		cout<<"姓名="<<pos->second.m_Name<<",工资="<<pos->second.m_Salary<<endl;
	}
	cout<<"美术部门=========================="<<endl;
	pos=m.find(2);
	count=m.count(2);
	index=0;
	for(;pos!=m.end() && index<count;pos++,index++){
		cout<<"姓名="<<pos->second.m_Name<<",工资="<<pos->second.m_Salary<<endl;
	}
	cout<<"研发部门=========================="<<endl;
	pos=m.find(3);
	count=m.count(3);
	index=0;
	for(;pos!=m.end() && index<count;pos++,index++){
		cout<<"姓名="<<pos->second.m_Name<<",工资="<<pos->second.m_Salary<<endl;
	}
}

int main(){

	//1、创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);
	for(vector<Worker>::iterator it=vWorker.begin();it!=vWorker.end();it++){
		cout<<it->m_Name<<", "<<it->m_Salary<<endl;
	}
	//2\员工分组
	multimap<int,Worker>mWorker;
	setGroup(vWorker,mWorker);

	//分组显示
	showWorkerByGroup(mWorker);

	return 0;
}
