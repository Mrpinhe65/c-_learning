/*************************************************************************
    > File Name: p105-类和对象-封装-设计案例2-点和圆的关系.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月13日 星期五 14时11分43秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

//重点理解类的嵌套和应用
//熟悉开发模式
//点类，用于建立圆心坐标对象以及求的点坐标对象
//点类嵌套在圆类中
class Point{
	public:
		void setX(int x){
			m_X=x;
		}
		
		void setY(int y){
			m_Y=y;
		}

		int getX(){
			return m_X;
		}

		int getY(){
			return m_Y;
		}

	private:
		int m_X;
		int m_Y;
};

//圆类,嵌套有点类，要用到点类的x，y
class Circle{
	public:
		void setR(int r){
			m_R=r;
		}
		int getR(){
			return m_R;
		}
		void setCenter(Point center){
			m_Center=center;
		}
		Point getCenter(){
			return m_Center;
		}
	private:
		int m_R;
		Point m_Center;//重点理解圆类中的点属性:把点类传入，当做圆类里的属性
};

void isInCircle(Circle &c,Point &p){
	//计算两点距离之平方
	int distance=pow((c.getCenter().getX()-p.getX()),2)+pow((c.getCenter().getY()-p.getY()),2);
	//计算半径的平方
	int rDistance=pow(c.getR(),2);
	//判断
	if(distance==rDistance){
		cout<<"点在圆弧上"<<endl;
	}else{
		if(distance>rDistance){
			cout<<"点在圆弧范围以外"<<endl;
		}else{
			cout<<"点在圆弧范围以内"<<endl;
		}
	}
}

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
