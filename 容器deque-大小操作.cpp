/*************************************************************************
    > File Name: 容器deque-大小操作.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 11时06分39秒
 ************************************************************************/
#include"容器.hpp"

void test01(){
	deque<int>d1;
	for(int i=0;i<10;i++){
		d1.push_back(i);
	}
	printDeque(d1);
	
	if(d1.empty()){
		cout<<"d1为空"<<endl;
	}
	else{
		cout<<"d1不为空"<<endl;
		cout<<"d1大小为"<<d1.size()<<endl;
	}
}

int main(){
	test01();
	return 0;
}
