/*************************************************************************
    > File Name: p049-数组-二维数组案例-考试成绩统计.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月03日 星期二 02时10分59秒

	           语文     数学     英语     总分
	张三       100      100      100
	李四        90       50      100 
	王五        60       70       80 
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

void test(){
	int scores[3][3]={
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[]={"张三","李四","王五"};
	for(int i=0;i<3;i++){
		int sum_scores=0;
		for(int j=0;j<3;j++){
			sum_scores+=scores[i][j];
			cout<<scores[i][j]<<" ";
		}
		cout<<endl;
		cout<<names[i]<<" 同学的总成绩"<<sum_scores<<endl;
	}
}

int main(){
	test();
	return 0;
}
