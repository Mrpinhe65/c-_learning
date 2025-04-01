/*************************************************************************
    > File Name: 类与封装.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月08日 星期一 14时52分48秒
 ************************************************************************/
#include"iostream"
using namespace std;

class Cube
{
	public:
		void setInfo(float l,float w,float h){
			m_L=l;
			m_W=w;
			m_H=h;
		}
		float getL(){
			return m_L;
		}
		float getW(){
			return m_W;
		}
		float getH(){
			return m_H;
		}
		float computeValume(){
			return m_L*m_W*m_H;
		}
		float computeArea(){
			return 2*(m_L*m_W+m_L*m_H+m_W*m_H);
		}

	private:
		float m_L;
		float m_W;
		float m_H;
};

int main(){
	float l,w,h;	
	cout<<"请输入长方体的长度L：";
	cin>>l;
	cout<<"请输入长方体的宽度W：";
	cin>>w;
	cout<<"请输入长方体的高度H：";
	cin>>h;
	
	Cube cube;
	cube.setInfo(l,w,h);
	cout<<"长方体体积=="<<cube.computeValume()<<endl;
	cout<<"长方体面积=="<<cube.computeArea()<<endl;

	return 0;
}
