/*************************************************************************
    > File Name: 容器deque-构造函数.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 10时33分38秒
 ************************************************************************/
#include"容器.hpp"

void test01(){

	deque<int>d1;
	for(int i=0;i<10;i++){
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int>d3(15,111);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);

}

int main(){
	test01();
	return 0;
}
