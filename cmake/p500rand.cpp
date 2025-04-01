/*************************************************************************
    > File Name: 随机数产生.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月02日 星期三 13时41分01秒
 ************************************************************************/
#include<iostream>
#include<random>
using namespace std;

void randomNum()
{
	//整数
	random_device myInt;//myInt 自己起名
	uniform_int_distribution<int> distMyInt(0,1000);//distMyInt 自己起名
	cout<<"随机0~1000的整数"<<distMyInt(myInt)<<endl;
	
	//浮点数
	random_device myDouble;
	uniform_real_distribution<double> distMyDouble(0.0,100.0);
	cout<<"随机0.0~100.0的浮点数"<<distMyDouble(myDouble)<<endl;
}

int main()
{
	randomNum();
	return 0;
}
