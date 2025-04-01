/*************************************************************************
    > File Name: p143f-C++文件操作-文本文件-读文件.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月23日 星期一 02时34分47秒

1.包含头文件 #include<fstream>
2.创建流对象 ifstream ofs;
3.打开文件   ifs.open("文件路径",打开方式);
4.写数据     ifs<<"写入的数据";
5.关闭文件   ifs.close();

文件打开方式可以配合使用，使用 | 符号
打开方式    解释
ios::in     为读文件而打开
ios::out    为写文件而打开
ios::ate    初始位置 文件尾
ios::app    追加方式写文件
ios::trunc  如果文件存在先删除，再创建
ios::binary 二进制方式

例:二进制写文件---- ios::out | ios::binary

ifstream   
ifstream
fstream
 ************************************************************************/
#include<iostream>
#include<fstream>  //文件操作头文件
using namespace std;

void test01()
{
	ifstream ifs;

	ifs.open("p143f_test_file.txt",ios::in);
	if(!ifs.is_open())
	{
		cout<<"file open falled"<<endl;
		return;
	}
	/*	
	//第一种读文件方法
	char buf[1024]={0};
	while(ifs>>buf)
	{
		cout<<buf<<endl;
	}
	
	//第二种读文件方法
	char buf[1024]={0};
	while(ifs.getline(buf,sizeof(buf)))
	{
		cout<<buf<<endl;
	}
	
	//第三种读文件方法
	string buf;
	while(getline(ifs,buf))
	{
		cout<<buf<<endl;
	}
	*/
	//第四种读文件方法
	char c;
	while((c=ifs.get())!=EOF)
	{
		cout<<c;
	}
	
	ifs.close();
}

int main()
{
	test01();
	return 0;
}
