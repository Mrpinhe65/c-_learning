/*************************************************************************
    > File Name: p137f-类和对象-多态-案例1-计算器.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月23日 星期一 07时13分14秒
 ************************************************************************/
#include<iostream>
using namespace std;

/*
//普通编程
class Calculator
{
	public:
		Calculator(int a,int b)
		{
			m_Num1=a;
			m_Num2=b;
		}

		int getResult(string oper)
		{
			if(oper=="+")
			{
				return m_Num1+m_Num2;
			}
			else
			{
				if(oper=="-")
				{
					return m_Num1-m_Num2;
				}
				else
				{
					if(oper=="*")
					{
						return m_Num1*m_Num2;
					}
					else
					{
						if(oper=="/")
						{
							return m_Num1/m_Num2;
						}
					}
				}
			}
			return 0;
		}
		int m_Num1;
		int m_Num2;
};
*/

//多态写法----引用的方法
//父类虚函数
//子类重写父类虚函数
//全局函数----引用父类----传入子类对象----多态：父类引用子类对象，执行子类对象对应的子类重写虚函数
//父类引用不同的子类对象，执行不同的子类重写函数
class Calculator
{
	public:
		Calculator()
		{
			m_Num1=100;
			m_Num2=50;
		}
		virtual int getResult()
		{
			cout<<"多态案例"<<endl;
			return 0;
		}
		int m_Num1;
		int m_Num2;
};

class Add:public Calculator
{
		int getResult()
		{
			return m_Num1+m_Num2;
		}
};

class Subtraction:public Calculator
{
		int getResult()
		{
			return m_Num1-m_Num2;
		}
};

class Multiplication:public Calculator
{
		int getResult()
		{
			return m_Num1*m_Num2;
		}
};

class Devision:public Calculator
{
		int getResult()
		{
			return m_Num1/m_Num2;
		}
};

void doCalculator(Calculator &cal)
{

	cout<<cal.getResult()<<endl;;

}
/*
int main()
{
	Calculator cal(100,20);
	cout<<cal.getResult("+")<<endl;
	cout<<cal.getResult("-")<<endl;
	cout<<cal.getResult("*")<<endl;
	cout<<cal.getResult("/")<<endl;
	return 0;
}
*/

//父类指针或引用指向行子类对象的方法
void test02()
{

}

int main()
{
	cout<<"重写父类虚函数，多态采用引用的方法实现"<<endl;
	cout<<"父类虚函数virtual int getResult()"<<endl;
	cout<<"以下是父类引用指向子类的关键语句"<<endl;
	cout<<"void doCalculator(Calculator &cal)"<<endl;
	cout<<"cal.getResult()"<<endl;
	cout<<"==========================================="<<endl;
	Add add;
	cout<<add.m_Num1<<"+"<<add.m_Num2<<"=";
	doCalculator(add);
	Subtraction sub;
	cout<<sub.m_Num1<<"-"<<sub.m_Num2<<"=";
	doCalculator(sub);
	Multiplication mul;
	cout<<mul.m_Num1<<"*"<<mul.m_Num2<<"=";
	doCalculator(mul);
	Devision dev;
	cout<<dev.m_Num1<<"/"<<dev.m_Num2<<"=";
	doCalculator(dev);
	return 0;
}
