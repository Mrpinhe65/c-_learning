/*************************************************************************
    > File Name: 类占用空间大小.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年08月04日 星期日 14时08分18秒
 ************************************************************************/
#include"public.hpp"

class Person{
	public:
		int a;
		double b;
		char c[1];
		Person(){
			cout<<"Person"<<endl;
		}
};

int main(){
	Person p;
	cout<<"size of Person="<<sizeof(p)<<endl;
	return 0;
}
