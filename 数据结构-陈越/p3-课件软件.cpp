/*************************************************************************
    > File Name: p3-课件软件.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月01日 星期二 10时56分23秒
 ************************************************************************/
#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;

clock_t start,stop;
double duration;
#define MAXN 30 /* 多项式最大项数，即多项式阶数+1 */
double f1(int n,double a[],double x);
double f2(int n,double a[],double x);

int main()
{
	double a[MAXN];
	for(int i=0;i<MAXN;i++)
	{
		a[i]=(double)i;
	}
	start=clock();
	double res=f1(MAXN-1,a,1.1);
	stop=clock();
	duration=((double)(stop-start));
	cout<<"ticks="<<(double)(stop-start)<<endl;
	cout<<"duration="<<duration<<endl;
	cout<<"f(1.1)="<<res<<endl;

	start=clock();
	double ret=f2(MAXN,a,1.1);
	stop=clock();
	duration=((double)(stop-start));
	cout<<"ticks="<<(double)(stop-start)<<endl;
	cout<<"duration="<<duration<<endl;
	cout<<"f(1.1)="<<ret<<endl;
	
	return 0;
}

double f1(int n,double a[],double x)
{
	double p=a[0];
	for(int i=0;i<=n;i++)
	{
		p+=(a[i] * pow(x,i));
	}
	return p;
}
double f2(int n,double a[],double x)
{
	double p=a[n];
	for(int i=n;i>0;i--)
	{
		p=a[i-1]+x*p;
	}
	return p;
}
