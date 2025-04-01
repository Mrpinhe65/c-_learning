/*************************************************************************
    > File Name: 常用算数生成算法-accumulate.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 15时18分58秒
 ************************************************************************/
#include"public.hpp"
#include<numeric>

void test(){
	vector<int>v;
	for(int i=0;i<=100;i++){
		v.push_back(i);
	}
	//参数三 累加的基值
	int total=accumulate(v.begin(),v.end(),0);
	cout<<total<<endl;
}

int main(){
	test();
	return 0;
}
