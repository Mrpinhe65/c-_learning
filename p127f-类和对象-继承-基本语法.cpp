/*************************************************************************
    > File Name: p127f-类和对象-继承-基本语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月20日 星期五 16时21分36秒
 ************************************************************************/
#include<iostream>
using namespace std;

/*
//Java
class Java
{
	public:
		void header()
		{
			cout<<"首页、公开课、登录、注册...(公共头部)"<<endl;
		}

		void footer()
		{
			cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
		}

		void left()
		{
			cout<<"Java，Python，C++,...左边栏"<<endl;
		}

		void right()
		{
			cout<<"右边栏"<<endl;
		}

		void content()
		{
			cout<<"Java专题内容"<<endl;
		}
};

//Python
class Python
{
	public:
		void header()
		{
			cout<<"首页、公开课、登录、注册...(公共头部)"<<endl;
		}

		void footer()
		{
			cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
		}

		void left()
		{
			cout<<"Java，Python，C++,...左边栏"<<endl;
		}

		void right()
		{
			cout<<"右边栏"<<endl;
		}

		void content()
		{
			cout<<"Python专题内容"<<endl;
		}
};

//C++
class Cpp
{
	public:
		void header()
		{
			cout<<"首页、公开课、登录、注册...(公共头部)"<<endl;
		}

		void footer()
		{
			cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
		}

		void left()
		{
			cout<<"Java，Python，C++,...左边栏"<<endl;
		}

		void right()
		{
			cout<<"右边栏"<<endl;
		}

		void content()
		{
			cout<<"C++专题内容"<<endl;
		}
};
*/

//类继承的方式
class BasePage
{
	public:
		void header()
		{
			cout<<"首页、公开课、登录、注册...(公共头部)"<<endl;
		}

		void footer()
		{
			cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
		}

		void left()
		{
			cout<<"Java，Python，C++,...左边栏"<<endl;
		}

		void right()
		{
			cout<<"右边栏"<<endl;
		}
};

//Java 页面
class Java:public BasePage
{
	public:
		void content()
		{
			cout<<"Java专题内容"<<endl;
		}
};
//Python 页面
class Python:public BasePage
{
	public:
		void content()
		{
			cout<<"Python专题内容"<<endl;
		}
};
//C++ 页面
class Cpp:public BasePage
{
	public:
		void content()
		{
			cout<<"C++专题内容"<<endl;
		}
};

void test01()
{
	cout<<"============================================="<<endl;
	Java ja;
	cout<<"Java页面信息"<<endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.right();

	cout<<"============================================="<<endl;
	Python py;
	cout<<"Python页面信息"<<endl;
	py.header();
	py.footer();
	py.left();
	py.right();
	
	//CPP
	cout<<"============================================="<<endl;
	Cpp cpp;
	cout<<"C++页面信息"<<endl;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.right();
}

int main()
{
	test01();
	return 0;
}
