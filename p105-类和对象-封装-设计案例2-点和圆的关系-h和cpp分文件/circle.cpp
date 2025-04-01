/*************************************************************************
    > File Name: circle.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月14日 星期六 08时02分44秒
 ************************************************************************/
#pragma once
#include"circle.h"

//圆类,嵌套有点类，要用到点类的x，y
void Circle::setR(int r){
	m_R=r;
}

int Circle::getR(){
	return m_R;
}

void Circle::setCenter(Point center){
	m_Center=center;
}

Point Circle::getCenter(){
	return m_Center;
}
