/*************************************************************************
    > File Name: p105-类和对象-圆类声明.h
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月14日 星期六 07时03分35秒
 ************************************************************************/
#pragma once
//圆类的声明
//圆类,嵌套有点类，要用到点类的x，y
class Circle{
	public:
		void setR(int r);
		int getR();
		void setCenter(Point center);
		Point getCenter();
	private:
		int m_R;
		Point m_Center;//重点理解圆类中的点属性:把点类传入，当做圆类里的属性
};

