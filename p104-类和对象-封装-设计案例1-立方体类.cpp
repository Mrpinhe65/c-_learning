/*************************************************************************
    > File Name: p104-类和对象-封装-设计案例1-立方体类.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月13日 星期五 08时31分33秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Cuboid{
	public:
		void setStats(int l,int w,int h){
			m_L=l;
			m_W=w;
			m_H=h;
		}

		int getL(){
			return m_L;
		}

		int getW(){
			return m_W;
		}

		int getH(){
			return m_H;
		}

		int area(){
			return 2*(m_L*m_H+m_L*m_W+m_W*m_H);
		}

		int valume(){
			return m_L*m_W*m_H;
		}

	private:
		int m_L=1;
		int m_W=2;
		int m_H=3;
};

int main(){
	Cuboid c;
	c.setStats(5,8,20);
	cout<<"m_L="<<c.getL()<<endl;
	cout<<"m_W="<<c.getW()<<endl;
	cout<<"m_H="<<c.getH()<<endl;
	cout<<"Volume="<<c.valume()<<endl;
	cout<<"Area="<<c.area()<<endl;
	return 0;
}
