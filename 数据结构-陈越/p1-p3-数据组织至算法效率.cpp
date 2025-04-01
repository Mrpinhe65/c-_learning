/*************************************************************************
    > File Name: p1-关于数据组织.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月30日 星期一 18时08分59秒

	浙江大学《数据结构》陈越 何钦铭
	Bilibili iMuseums 共计149讲
 ************************************************************************/
//空间问题
//循环打印和递归打印
//循环占用硬件空间少
//递归占用硬件空间多，本机当n到达10万就无法分配函数空间出错

#include<iostream>
#include<cmath>
#include<unistd.h>
using namespace std;
#include<time.h> // 返回的变量类型 clock_t
/*
 time.h 相关
 clock_t 返回变量类型
 start=clock();//开始计时
 function(); //计时的函数运行
 stop=clock(); //结束时计时
 double duration=((double)(stop-start))/CLK_TCK;//运行时长
*/

void get_CLK_TCK();
void loopPrintN(int n);
void recursionPrintN(int n);

double loopFunc(int n,double[],double x);
double scienceFunc(int n,double a[],double x);

void test01()
{
	clock_t start1;
	clock_t stop1;
	double duration1;
	cout<<"请输入需要打印的整数序列最大值n: ";
	int n;
	cin>>n;
	cout<<"循环打印===================================="<<endl;
	start1=clock();
	loopPrintN(n);
	stop1=clock();
	duration1=((double)(stop1-start1))/1000;
	cout<<"循环运行时长: "<<duration1<<endl;
	cout<<"递归打印===================================="<<endl;
	clock_t start2;
	clock_t stop2;
	double duration2;
	start2=clock();
	recursionPrintN(n);
	stop2=clock();
	duration2=((double)(stop2-start2))/1000;
	cout<<"递归运行时长: "<<duration2<<endl;
}

void test02()
{
	clock_t start;
	clock_t stop;
	double duration;

	/*
	f(x)=a[0]x^(0)+a[1]x^(1)+...+a[n-1]x^(n-1)+a[n]x^(n)
	
	f(x)=2.1x^0+2.4x^1+3.14x^2+6.18x^3+0.2x^4+
	     0.8x^5+10.5x^6+11.2x^7+6.7x^8+8.9x^9+
	     5.3x^10+6.2x^11+21.3x^12+33.7x^13+41.8x^14
	     +2.9x^15+3.7x^16+4.9x^17+21.5x^18+20.6x^19
	*/

	int n=20;
	double a[20]=
	{2.1,2.4,3.14,6.18,0.2,0.8,10.5,11.2,6.7,8.9,
	 5.3,6.2,21.3,33.7,41.8,2.9,3.7,4.9,21.5,20.6
	};
	double x=2.6;
	cout<<"简单循环运算=============================="<<endl;
	start=clock();
	double res=loopFunc(n,a,x);
	stop=clock();
	duration=((double)(stop-start))/1000;
	cout<<"简单循环运行时间: "<<duration<<endl;
	cout<<"f("<<x<<")= "<<res<<endl;
	cout<<"科学循环运算=============================="<<endl;
	start=clock();
	double ret =scienceFunc(n,a,x);
	stop=clock();
	duration=((double)(stop-start))/1000;
	cout<<"科学循环运行时间: "<<duration<<endl;
	cout<<"f("<<x<<")= "<<ret<<endl;
}

int main()
{
	get_CLK_TCK();
	test01();
	test02();
	return 0;
}

void loopPrintN(int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return;
}

void recursionPrintN(int n)
{
	if(n==-1)
	{
		return;
	}
	
	recursionPrintN(n-1);
	cout<<n<<" ";
}

//原公式
//f(x)=a[0]x^(0)+a[1]x^(1)+...+a[n-1]x^(n-1)+a[n]x^(n)
double loopFunc(int n,double a[],double x)
{
	double p=a[0];
	for(int i=0;i<=n;i++)
	{
		p += (a[i]*pow(x,i));
	}
	return p;
}

//原公式转化为如下：
//f(x)=a[0]+x(a[1]+x(...(a[n-1]+x(a[n]))...))
double scienceFunc(int n,double a[],double x)
{
	double p=a[n];
	for(int i=n;i>0;i--)
	{
		p=a[i-1]+x*p;
	}
	return p;
}

void get_CLK_TCK()
{
	cout<<"CLK_TCK="<<sysconf(_SC_CLK_TCK)<<endl;
	/*
	//CLK_TCK 似乎不准确 
	int tms;
	cout<<"请输入tms: ";
	cin>>tms;
	clock_t start;
	clock_t stop;
	double duration;
	start=clock();
	sleep(tms);
	stop=clock();
	duration=((double)(stop-start));
	cout<<tms<<"秒时钟打点数"<<duration<<" "<<start<<" "<<stop<<endl;
	*/
}
