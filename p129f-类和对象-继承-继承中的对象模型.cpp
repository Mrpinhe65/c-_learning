/*************************************************************************
    > File Name: p129f-类和对象-继承-继承中的对象模型.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月22日 星期日 09时15分59秒
 ************************************************************************/
#include<iostream>
using namespace std;

//继承中的对象模型

class Base
{
	public:
		int m_A;
	protected:
		int m_B;
	private:
		int m_C;
};

class Son:public Base
{
	public:
		int m_D;
};

//利用VSCODE 开发人员命令提示符 查看对象模型
// cl d1 reportSingleClassLayout类名 文件名
//
void test01()
{
	//父类中所有非静态成员属性都会被子类继承下去
	//匪类中私有成员属性，也是被继承下来了
	//但私有属性被编译器隐藏了，因此是访问不到
	cout<<"size of Baes="<<sizeof(Base)<<endl;
	cout<<"size of Son ="<<sizeof(Son)<<endl;
}

int main()
{
	test01();
	return 0;
}
