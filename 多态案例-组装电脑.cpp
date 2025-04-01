/*************************************************************************
    > File Name: 多态案例-组装电脑.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月13日 星期六 21时12分02秒
 ************************************************************************/
#include<iostream>
using namespace std;

class CPU{
	public:
		virtual void calculate()=0;
};

class VideoCard{
	public:
		virtual void display()=0;
};

class Memory{
	public:
		virtual void storage()=0;
};

class Computer{
	public:
		Computer(CPU *cpu,VideoCard *vc,Memory *mem){
			m_cpu=cpu;
			m_vc=vc;
			m_mem=mem;
		}

	void work(){
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	
	//析构函数，释放指针
	~Computer(){
		if(m_cpu !=nullptr){
			delete m_cpu;
			m_cpu=nullptr;
		}
		if(m_vc !=nullptr){
			delete m_vc;
			m_vc=nullptr;
		}
		if(m_mem !=nullptr){
			delete m_mem;
			m_mem=nullptr;
		}
	}

	private:
		CPU * m_cpu;
		VideoCard *m_vc;
		Memory *m_mem;

};

class intelCPU:public CPU{
	public:
		virtual void calculate(){
			cout<<"intel CPU in working！"<<endl;
		}
};

class intelVideoCard:public VideoCard{
	public:
		virtual void display(){
			cout<<"intel VideoCard in working"<<endl;
		}
};

class intelMemory:public Memory{
	public:
		virtual void storage(){
			cout<<"intel Memory in working"<<endl;
		}
};

class lenovoCPU:public CPU{
	public:
		virtual void calculate(){
			cout<<"lenovo CPU in working！"<<endl;
		}
};

class lenovoVideoCard:public VideoCard{
	public:
		virtual void display(){
			cout<<"lenovo VideoCard in working"<<endl;
		}
};

class lenovoMemory:public Memory{
	public:
		virtual void storage(){
			cout<<"lenovo Memory in working"<<endl;
		}
};

void test01(){
	cout<<"======================"<<endl;
	cout<<"======第一台电脑======"<<endl;
	CPU *intelCpu=new intelCPU;
	VideoCard *intelCard=new intelVideoCard;
	Memory *intelMem=new intelMemory;

	Computer *computer1=new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;
	/*  释放intelIpu、inrelCard、intelMen的方案1：
	delete intelCpu，intelCard,intelMen;
	方案1   */
	/* 方案2:调用Computer类的析构函数，在析构函数中delete */
	
	cout<<"======================"<<endl;
	cout<<"======第二台电脑======"<<endl;
	CPU *lenovoCpu=new lenovoCPU;
	VideoCard *lenovoCard=new lenovoVideoCard;
	Memory *lenovoMem=new lenovoMemory;
	Computer *computer2=new Computer(lenovoCpu,lenovoCard,lenovoMem);
	computer2->work();
	delete computer2;
	
	cout<<"======================"<<endl;
	cout<<"======第三台电脑======"<<endl;
	CPU *intelCpu3=new intelCPU;
	VideoCard *lenovoCard3=new lenovoVideoCard;
	Memory *intelMem3=new intelMemory;
	Computer *computer3=new Computer(intelCpu3,lenovoCard3,intelMem3);
	computer3->work();
	delete computer3;
}

int main(){
	test01();

	return 0;
}
