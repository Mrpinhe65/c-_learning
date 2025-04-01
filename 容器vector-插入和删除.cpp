/*************************************************************************
    > File Name: 容器vector-插入和删除.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 03时14分44秒
 ************************************************************************/
#include"printVector.hpp"

void test01(){
	
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	printVector(v1);

	v1.pop_back();//尾删
	printVector(v1);

	//插入元素
	v1.insert(v1.begin(),100);
	printVector(v1);
	
	v1.insert(v1.begin(),2,333);
	printVector(v1);

	//删除元素
	v1.erase(v1.begin());//删除起始位的元素
	printVector(v1);

	v1.erase(v1.begin(),v1.end()); //删除从头到尾的元素--所有元素
	printVector(v1);
	
	v1.push_back(15);
	v1.push_back(25);
	v1.push_back(35);
	v1.push_back(45);
	v1.push_back(55);
	printVector(v1);
	v1.clear();//删除所有元素
	printVector(v1);
}

int main(){
	test01();
	return 0;
}
