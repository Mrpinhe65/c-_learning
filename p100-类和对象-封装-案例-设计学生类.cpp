/*************************************************************************
    > File Name: p100-类和对象-封装-案例-设计学生类.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月12日 星期四 07时33分30秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Student{
	public:
		//属性 
		int m_ID;
		string m_Name;
		string m_Gender;
		int m_Age;
		int m_Score;
		float m_Hight;
		float m_Weight;

		void setStudent(int ID,string name,string gender,int age,int score,float hight,float weight)
		{
			m_ID=ID;
			m_Name=name;
			m_Gender=gender;
			m_Age=age;
			m_Score=score;
			m_Hight=hight;
			m_Weight=weight;
		}

		void showStudent()//行为----显示学生属性
		{
			cout<<"ID="<<m_ID<<endl;
			cout<<"Name="<<m_Name<<endl;
			cout<<"Gender="<<m_Gender<<endl;
			cout<<"Age="<<m_Age<<endl;
			cout<<"Score="<<m_Score<<endl;
			cout<<"Hight="<<m_Hight<<endl;
			cout<<"Weight="<<m_Weight<<endl;
		}

};

int main(){
	Student hwd;
	hwd.m_ID=1001;
	hwd.m_Name="黄卫东";
	hwd.m_Gender="男";
	hwd.m_Age=59;
	hwd.m_Score=100;
	hwd.m_Hight=176;
	hwd.m_Weight=97;

	hwd.showStudent();

	Student lxl;
	lxl.setStudent(1002,"刘晓漓","女",56,96,162,54);
	lxl.showStudent();
	cout<<"类的长度=="<<sizeof(Student)<<endl;
	return 0;
}
