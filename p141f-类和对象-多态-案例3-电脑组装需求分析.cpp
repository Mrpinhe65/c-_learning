/*************************************************************************
    > File Name: p141f-类和对象-多态-案例3-电脑组装需求分析.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月23日 星期一 22时32分56秒
 ************************************************************************/
#include<iostream>
using namespace std;

//抽象的零件类
//抽象的CPU类
class CPU
{
	public:
		virtual void calculator()=0;
};

//抽象的显卡类
class VideoCard
{
	public:
		virtual void display()=0;
};

//抽象的内存条类
class Memory
{
	public:
		virtual void storage()=0;
};

//电脑类
class Computer
{
	public:
		Computer(CPU *cpu,VideoCard *vc,Memory *mem)
		{
			m_cpu=cpu;
			m_vc=vc;
			m_mem=mem;
		}
		~Computer()
		{
			cout<<"Computer 的析构函数，释放堆区内存"<<endl;
			if(m_cpu!=nullptr)
			{
				delete m_cpu;
				m_cpu=nullptr;
			}
			if(m_vc!=nullptr)
			{
				delete m_vc;
				m_vc=nullptr;
			}
			if(m_mem!=nullptr)
			{
				delete m_mem;
				m_mem=nullptr;
			}
		}

		void work()
		{
			m_cpu->calculator();
			m_vc->display();
			m_mem->storage();
		}

	private:
		CPU *m_cpu;
		VideoCard *m_vc;
		Memory *m_mem;
};

//具体厂商
//intel
class IntelCPU:public CPU
{
	public:
	virtual void calculator()
	{
		cout<<"Intel的CPU 开始运算"<<endl;
	}
};

class IntelVideoCard:public VideoCard
{
	public:
	virtual void display()
	{
		cout<<"Intel的显卡 开始显示"<<endl;
	}
};

class IntelMemory:public Memory
{
	public:
	virtual void storage()
	{
		cout<<"Intel的 内存 开始显示存储"<<endl;
	}
};

//Lenovo
class LenovoCPU:public CPU
{
	public:
	virtual void calculator()
	{
		cout<<"Lenovo的CPU 开始运算"<<endl;
	}
};

class LenovoVideoCard:public VideoCard
{
	public:
	virtual void display()
	{
		cout<<"Lenovo的显卡 开始显示"<<endl;
	}
};

class LenovoMemory:public Memory
{
	public:
	virtual void storage()
	{
		cout<<"Lenovo的 内存 开始显示存储"<<endl;
	}
};

void test01()
{
	cout<<"==============================="<<endl;
	cout<<"第一台电脑开始工作"<<endl;
	CPU * intelCpu=new IntelCPU;
	VideoCard * intelCard=new IntelVideoCard;
	Memory * intelMemory=new IntelMemory;

	Computer * computer1=new Computer(intelCpu,intelCard,intelMemory);
	computer1->work();
	if(computer1 !=nullptr)
	{
		delete computer1;
		computer1=nullptr;
	}

	cout<<"==============================="<<endl;
	cout<<"第二台电脑开始工作"<<endl;
	Computer * computer2=new Computer
		(
			new LenovoCPU,
			new LenovoVideoCard,
			new LenovoMemory
		);
	computer2->work();
	if(computer2 !=nullptr)
	{
		delete computer2;
		computer2=nullptr;
	}
	cout<<"==============================="<<endl;
	cout<<"第三台电脑开始工作"<<endl;
	Computer * computer3=new Computer
		(
			new LenovoCPU,
			new IntelVideoCard,
			new LenovoMemory
		);
	computer3->work();
	if(computer3 !=nullptr)
	{
		delete computer3;
		computer3=nullptr;
	}
}

int main()
{
	test01();
	return 0;
}
