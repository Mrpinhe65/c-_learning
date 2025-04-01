/*************************************************************************
    > File Name: p501-结构体数据写入文件-二进制.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月02日 星期三 13时53分12秒
 ************************************************************************/
#include<iostream>
#include<fstream>
using namespace std;

//涉及到文件存储，避免使用string类型
//本例在本机上用string name;二进制读取运行时出现 核心已转储 错误
//把结构体定义改成char name[20]; 程序运行正常

//定义一个结构体
struct Person
{
	char name[20]; //涉及到文件读取存储,避免设成string 类型，可能会出现错误
	int age;
	int score;
};

int main()
{
	//创建结构体实例及初始化
	Person person[3]={"hwd", 59, 98, "lxl", 29, 91, "hlb", 19, 78};

	cout<<"=================================================="<<endl;
	//打开文件用于写入，二进制格式
	ofstream ofs("structdata.dat",ios::binary | ios::out);
	if(!ofs)
	{
		cout<<"无法打开文件"<<endl;
		return 1;
	}
	//写入结构体数据到文件
	ofs.write((char*)&person,sizeof(Person));
	//关闭文件
	ofs.close();
	cout<<"文件已存储"<<endl;	

	//读取二进制结构体数据文件
	cout<<"=================================================="<<endl;
	Person p[3];
	ifstream ifs("structdata.dat",ios::binary | ios::out);
	if(!ifs)
	{
		cout<<"can't open the file"<<endl;
		return -1;
	}
	cout<<sizeof(Person)<<endl;

	ifs.read((char*)p, sizeof(Person) * 3);
	for(int i = 0; i < 3; i++)
	{

		cout<<"name "<<p[i].name<<",age "<<p[i].age<<",score "<<p[i].score<<endl;
	}
	ifs.close();

	return 0;
}
