/*************************************************************************
    > File Name: 继承的基本语法.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 16时15分59秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Base{
	public:
		void header(){
			cout<<"头部"<<endl;
		}
		void footer(){
			cout<<"底部"<<endl;
		}
		void left(){
			cout<<"左边栏"<<endl;
		}
		void right(){
			cout<<"右边栏"<<endl;
		}
};
//继承语法 class [子类/派生类] : public [父类/基类]
class Java:public Base{
	public:
		void content(){
			cout<<"Java内容"<<endl;
		}

};
class Python:public Base{
	public:
		void content(){
			cout<<"Python内容"<<endl;
		}

};
class C_plus:public Base{
	public:
		void content(){
			cout<<"C++内容"<<endl;
		}

};

void test01(){
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.right();
	ja.content();
	Python py;
	py.header();
	py.footer();
	py.left();
	py.right();
	py.content();
	C_plus cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.right();
	cpp.content();
}

int main(){
	test01();

	return 0;
}
