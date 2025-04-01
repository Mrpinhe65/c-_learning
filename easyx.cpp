/*************************************************************************
    > File Name: easyx.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月18日 星期五 17时49分32秒
 ************************************************************************/
#include<iostream>
#include<easyx.h> // graphics 导入图形库界面
using namespace std;

int main()
{
	//创建一个图形界面
	initgraph(800,600);
	outtestxy(20,40,"In gragh");
	while(1);
	return 0;
}
