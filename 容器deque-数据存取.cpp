/*************************************************************************
    > File Name: 容器deque-数据存取.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 14时38分52秒
 ************************************************************************/
#include"容器.hpp"

void test01(){
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	for(int i=0;i<d.size();i++){
		cout<<"d["<<i<<"]=="<<d[i]<<endl;
	}

	for(int i=0;i<d.size();i++){
		cout<<"d.at("<<i<<")=="<<d.at(i)<<endl;
	}
	cout<<"第一个元素d.front()=="<<d.front()<<endl;
	cout<<"最后一个元素d.back()=="<<d.back()<<endl;
}

int main(){

	test01();
	return 0;
}
