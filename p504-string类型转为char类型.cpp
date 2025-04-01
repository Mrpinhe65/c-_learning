/*************************************************************************
    > File Name: p504-string类型转为char类型.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月19日 星期六 08时53分52秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

class StringToChar
{
	public:
		StringToChar(string name, int age)
		{
			cout << "name.size() = " << name.size() << endl;
			copy(name.begin(), name.end(), this -> m_Name);
			this -> m_Name[name.size()] = '\0';
			this -> m_Age = age;
		}
		void showChar()
		{
			cout << this -> m_Name << endl;
			cout << "sizeof(This -> m_Name) = " << sizeof(this -> m_Name) << endl;
			cout << this -> m_Age << endl;
		}
	private:
		char m_Name[20];
		int m_Age;

};

int main()
{
	StringToChar sc("hello c++",59);
	sc.showChar();

	return 0;
}
