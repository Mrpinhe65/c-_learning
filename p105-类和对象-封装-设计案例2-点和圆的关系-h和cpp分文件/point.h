/*************************************************************************
    > File Name: p105-类和对象-点类声明.h
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月14日 星期六 07时01分42秒
 ************************************************************************/
#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;


//点类，用于建立圆心坐标对象以及求的点坐标对象
//点类嵌套在圆类中
class Point{
	public:
		void setX(int x);
		
		void setY(int y);

		int getX();

		int getY();

	private:
		int m_X;
		int m_Y;
};
