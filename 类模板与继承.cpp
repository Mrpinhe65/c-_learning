/*************************************************************************
    > File Name: 类模板与继承.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月15日 星期一 20时57分32秒
 ************************************************************************/
#include<iostream>
using namespace std;

template<class T>
class Base{
	T m;
};

//class Son:public Base //错误，必须知道父类中T的类型才能继承
class Son:public Base<int>
{

};

void test01(){
    Son s1;
	cout<<"s1对象已经实例化"<<endl;
}
//如果想灵活指定父类中T的类型，子类也需要变更模板
template<class T1,class T2>
class Son2:public Base<T2>
{
	public:

		Son2(){
			cout<<"T1的类型==="<<typeid(T1).name()<<endl;
			cout<<"T2的类型==="<<typeid(T2).name()<<endl;
		}
		T1 obj;
};

void test02(){
	Son2<int,char>s2;
	cout<<"s2对象已经实例化"<<endl;
}

int main(){

    test01();
	test02();
	return 0;
}
