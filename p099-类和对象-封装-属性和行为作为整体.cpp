/*************************************************************************
    > File Name: p099-类和对象-封装-属性和行为作为整体.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月11日 星期三 17时05分21秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const double PI=3.1415926;

class Circle //类--抽象的类，整合各种属性和行为
{
	public:
		int m_r;//属性--半径

		double calculateZC() //行为--计算周长
		{
			return 2*PI*m_r;
		}
};

int main(){
	Circle c1; //实例化--把抽象的类实例化成具体的对象
	c1.m_r=10;//对象属性赋值--半径
	cout<<"周长=="<<c1.calculateZC()<<endl;//对象行为--计算周长
	return 0;
}
