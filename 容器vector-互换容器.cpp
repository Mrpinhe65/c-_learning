/*************************************************************************
    > File Name: 容器vector-互换容器.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 08时02分25秒
 ************************************************************************/
#include"printVector.hpp"

void test01(){
	vector<int>v1;
	for(int i=0;i<20;i++){
		v1.push_back(i);
	}
	printVector(v1);
	
	vector<int>v2;
	for(int i=10;i>0;i--){
		v2.push_back(i);
	}
	printVector(v2);
	cout<<"==========交换后=========="<<endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

	//实际用途：匿名容器互换，减少内存占用
	vector<int>v;
	for(int i=0;i<100000;i++){
		v.push_back(i);
	}
	cout<<"v的容量==="<<v.capacity()<<endl;
	cout<<"v的大小==="<<v.size()<<endl;
	
	v.resize(3);
	cout<<"v的容量==="<<v.capacity()<<endl;
	cout<<"v的大小==="<<v.size()<<endl;

	//巧用互换收缩内存
	vector<int>(v).swap(v);
	cout<<"v的容量==="<<v.capacity()<<endl;
	cout<<"v的大小==="<<v.size()<<endl;
}

int main(){

	test01();

	return 0;
}
