/*
STL 案例
公司今天分配10个员工（ABCDEFGHIJ）
10名员工进入公司后，需要指派员工的工作部门
员工信息有 姓名name 工资组成 部门分为：0-策划、1-美术、2-研发
随机给10名员工分配部门和工资
通过multimap进行信息插入 key（部门编号） value（员工信息）
分部门显示员工信息
*/

/*
实现步骤
1 创建10名员工，存于vector
2 遍历vector，取出每个员工，进行随机分配
3 分组后，将员工部门编号作为key，具体工作为value,放入multimap
4 分部门显示员工信息
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

#include<ctime>

using namespace std;

class Worker
{
    public:
        string m_Name; //姓名
        int m_Salary;  //工资
};

void createWorker(vector<Worker>&v)
{
    string nameSeed="ABCDEFGHIJ";
    for(int i=0;i<10;i++)
    {
        Worker worker;
        worker.m_Name="员工";
        worker.m_Name+=nameSeed[i];
        
        worker.m_Salary=rand()%10000+10000;
        
        //将员工存放于vector
        v.push_back(worker);
    }
}

void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
    for(vector<Worker>::iterator it=v.begin();it!=v.end();it++)
    {   
        //产生随机的部门编号 0 1 2
        int deptId=rand()%3;
        
        //数据插入multimap
        m.insert(make_pair(deptId,*it));
    }
    
    
    // 遍历multimap容器测试代码
    for(multimap<int,Worker>::iterator it=m.begin();it!=m.end();it++)
    {
        cout <<it->first<< " "<<it->second.m_Name<<" "<<it->second.m_Salary<<endl;
    }
    cout<<endl;
    

    //分部门遍历员工信息
    // 0-策划部门
    int id=m.count(0);
    multimap<int,Worker>::iterator pos=m.find(0);
    int index=0;
    for(;pos!=m.end() && index<id;pos++,index++)
    {
        cout<<pos->first<<" "<<pos->second.m_Name<< " "<<pos->second.m_Salary<<endl;
    }
    cout<<endl;

    // 1-美术部门
    id=m.count(1);
    pos=m.find(1);
    index=0;
    for(;pos!=m.end() && index<id;pos++,index++)
    {
        cout<<pos->first<<" "<<pos->second.m_Name<< " "<<pos->second.m_Salary<<endl;
    }
    cout<<endl;

    // 2-研发部门
    id=m.count(2);
    pos=m.find(2);
    index=0;
    for(;pos!=m.end() && index<id;pos++,index++)
    {
        cout<<pos->first<<" "<<pos->second.m_Name<< " "<<pos->second.m_Salary<<endl;
    }
    cout<<endl;
}

int main(int argc,char* argv[],char* envp[])
{
    //随机数种子
    srand((unsigned int)(time(nullptr)));
    
    // 1 创建员工
    vector<Worker>vWorker;
    createWorker(vWorker);
    
    // 2 员工分组
    multimap<int,Worker>mWorker;
    setGroup(vWorker,mWorker);


    /*
    //测试vector代码
    for(vector<Worker>::iterator it=vWorker.begin();it!=vWorker.end();it++)
    {
        cout<<it->m_Name<<" "<<(*it).m_Salary<<endl;
    }
    cout<<endl;
    */


    return 0;
}
