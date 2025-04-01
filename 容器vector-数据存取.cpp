/*************************************************************************
    > File Name: 容器vector-数据存取.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 07时27分06秒
 ************************************************************************/
#include"容器.hpp"

void test01(){
	vector<int>v1;
	for(int i=0;i<20;i++){
		v1.push_back(i);
	}
	printVector(v1);
	
	//利用[]访问元素
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	//利用.at() 方式访问函数
	for(int i=0;i<v1.size();i++){
		cout<<v1.at(i)<<" ";
	}
	cout<<endl;

	v1[7]=7777;
	v1.at(5)=5555;
	printVector(v1);

	//访问第一个元素和最后一个元素
	cout<<v1.front()<<endl;
	cout<<v1.back()<<endl;
}

int main(){

	test01();

	return 0;
}
