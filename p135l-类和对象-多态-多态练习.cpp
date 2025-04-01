/*************************************************************************
    > File Name: p135l-类和对象-多态-多态练习.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月22日 星期日 22时12分16秒
 ************************************************************************/
#include<iostream>
using namespace std;

class Father
{
	public:
		virtual void hunting()
		{
			cout<<"父亲专打狗熊"<<endl;
		}
};

class Son:public Father
{
	public:
		void hunting()
		{
			cout<<"儿子专打野猪"<<endl;
		}
};

class Daughter:public Father
{
	public:
		void hunting()
		{
			cout<<"女儿专打野兔"<<endl;
		}
};

void hunter(Father & father)
{
	father.hunting();
}

void test()
{
	Father ff;
	hunter(ff);
	Son ss;
	hunter(ss);
	Daughter dd;
	hunter(dd);
}

int main()
{
	test();
	//getchar();
	return 0;
}
