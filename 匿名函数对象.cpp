/*************************************************************************
    > File Name: 匿名函数对象.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 16时00分08秒
 ************************************************************************/
#include"iostream"
using namespace std;

class MyAdd{
	public:
		int operator()(int a,int b){
			return a+b;
		}
};

int test01(){
	MyAdd myadd;
	cout<<myadd(100,200)<<endl;
	cout<<MyAdd()(400,500)<<endl;//匿名函数对象
	
	return 0;
}

int main(){

	test01();
	return 0;
}
