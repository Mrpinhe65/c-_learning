/*************************************************************************
    > File Name: p501-码农论坛-c++结构体数据写入文件-二进制.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月13日 星期日 11时38分53秒
 ************************************************************************/
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fout("test.txt");//
	//ofstream fout("text.txt", 打开模式);	
	//ios::out 默认的打开模式，打开时会清除原内容
	//ios::trunc 打开时清除原内容
	//ios::app 文件尾部追加
	//ios::binary 以二进制的方式打开文件
	//以下三行对写入的效果是一样的，对原文件效果有差别
	ofstream fout("test.txt", ios::out);
	//ofstream fout("test.txt", ios::strunc);
	//ofstream fout("test.txt", ios::app);

	//ofstream fout; //创建输出流对象
	//fout.open("test.txt"); //打开文件，如果文件不存在，则创建；如果文件存在，则清除其内容
	
	//向文件中写入数据
	fout << "西施|19|极漂亮\n";
	fout << "冰冰|22|漂亮\n";
	fout << "幂幂|25|一般\n";

	fout.close(); //关闭文件，fout失效前会自动调用close();
	
	cout << "操作文件完成。\n";

	
	return 0;
}
