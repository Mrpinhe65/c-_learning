/*************************************************************************
    > File Name: 继承中的对象模型.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 18时04分01秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Base{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son:public Base{
	public:
		int m_D;
};

void test01(){
	cout<<"sizeof(Base)=="<<sizeof(Base)<<endl;
	cout<<"sizeof(Son)=="<<sizeof(Son)<<endl;
}

int main(){

	test01();
	return 0;
}
