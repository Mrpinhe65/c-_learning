/*************************************************************************
    > File Name: p143f-C++文件操作-文本文件-写文件.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年09月23日 星期一 02时34分47秒

1.包含头文件 #include<fstream>
2.创建流对象 ofstream ofs;
3.打开文件   ofs.open("文件路径",打开方式);
4.写数据     ofs<<"写入的数据";
5.关闭文件   ofs.close();

文件打开方式可以配合使用，使用 | 符号
打开方式    解释
ios::in     为读文件而打开
ios::out    为写文件而打开
ios::ate    初始位置 文件尾
ios::app    追加方式写文件
ios::trunc  如果文件存在先删除，再创建
ios::binary 二进制方式

例:二进制写文件---- ios::out | ios::binary

ofstream   
ifstream
fstream
 ************************************************************************/
#include<iostream>
#include<fstream>  //文件操作头文件
using namespace std;

void test01()
{
	ofstream ofs;

	ofs.open("p143f_test_file.txt",ios::out);

	ofs<<"name:hwd"<<endl;
	ofs<<"name:lxl"<<endl;
	ofs<<"name:hdj"<<endl;
	ofs<<"name:mzd"<<endl;
	ofs<<"name:dxp"<<endl;

	ofs.close();
}

int main()
{
	test01();
	return 0;
}
