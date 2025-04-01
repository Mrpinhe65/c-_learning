/*************************************************************************
    > File Name: 常用集合算法-set_difference.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 16时18分45秒
 ************************************************************************/
#include"public.hpp"
#include<numeric>

void test(){
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+7);
	}
	vector<int>v_1;
	v_1.resize(max(v1.size(),v2.size()));
	vector<int>v_2;
	v_2.resize(max(v1.size(),v2.size()));
	vector<int>::iterator itEnd_1=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v_1.begin());
	for_each(v_1.begin(),itEnd_1,printFor_each);
	cout<<endl;
	vector<int>::iterator itEnd_2=set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),v_2.begin());
	for_each(v_2.begin(),itEnd_2,printFor_each);
	cout<<endl;
}

int main(){
	test();
	return 0;
}
