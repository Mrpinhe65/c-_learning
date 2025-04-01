/*************************************************************************
    > File Name: 常用集合算法-set_intersection.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 15时45分39秒
 ************************************************************************/
#include"public.hpp"
#include<numeric>

void test(){
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),printFor_each);
	cout<<endl;
	for_each(v2.begin(),v2.end(),printFor_each);
	cout<<endl;
	//目标容器需要提前开辟空间，可按最小容器的空间开辟
	vector<int>vTarget;
	vTarget.resize(min(v1.size(),v2.size()));

	vector<int>::iterator itEnd=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
	for_each(vTarget.begin(),vTarget.end(),printFor_each);
	cout<<endl;
	for_each(vTarget.begin(),itEnd,printFor_each);
	cout<<endl;
}

int main(){
	test();
	return 0;
}
