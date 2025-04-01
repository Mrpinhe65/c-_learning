/*************************************************************************
    > File Name: 菱形继承.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月10日 星期三 21时06分25秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Animal{
	public:
		int m_Age;
};

//利用虚继承 解决菱形继承问题--->virtual
//Animal类称为 虚基类
class Sheep:virtual public Animal{

};

class Camel:virtual public Animal{

};

class SheepCamel:public Sheep,public Camel{

};

void test01(){
	SheepCamel sc;
	//sc.Animal::m_Age=55;
	sc.Camel::m_Age=29;
	sc.Sheep::m_Age=18;
	//cout<<"sc.Animal::m_Age="<<sc.Animal::m_Age<<endl;
	cout<<"sc.Sheep::m_Age="<<sc.Sheep::m_Age<<endl;
	cout<<"sc.Camel::m_Age="<<sc.Camel::m_Age<<endl;
	cout<<"sc.m_Age="<<sc.m_Age<<endl;
}

int main(){

	test01();
	return 0;
}
