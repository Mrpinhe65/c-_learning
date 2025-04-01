/*************************************************************************
    > File Name: p105-类和对象-封装-设计案例2-点和圆的关系.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月13日 星期五 14时11分43秒
 ************************************************************************/
#include"head.hpp"
#include"point.hpp"
#include"circle.hpp"	
#include"isincircle.hpp"
//重点理解类的嵌套和应用
//熟悉开发模式

int main(){
	//圆对象及赋值
	Circle c;
	c.setR(10);
	//圆心对象及赋值
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点对象及赋值
	Point p;
	p.setX(8);
	p.setY(9);
	//判断关系
	isInCircle(c,p);

	return 0;
}
