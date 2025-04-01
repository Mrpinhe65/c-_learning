/*************************************************************************
    > File Name: isincircle.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月14日 星期六 08时16分02秒
 ************************************************************************/
#pragma once

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
