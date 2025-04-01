/*************************************************************************
    > File Name: 文件-文本写操作.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月14日 星期日 09时31分38秒
 ************************************************************************/
#include<iostream>
#include<fstream>
using namespace std;

//ofstream 写；ifstream 读；fstream 读写

void test01(){
	//1.包含头文件 fstream
	//2.创建流对象
	ofstream ofs;
	//3.指定打开方式
	ofs.open("text.txt",ios::out);
	//4.写内容
	ofs<<"姓名：张三"<<endl;
	ofs<<"性别：男"<<endl;
	ofs<<"年龄：19"<<endl;
	ofs<<"手机：18277279288"<<endl;
	ofs<<"籍贯：广西"<<endl;
	//5.关闭文件
	ofs.close();
}

int main(){
	test01();

	return 0;
}
