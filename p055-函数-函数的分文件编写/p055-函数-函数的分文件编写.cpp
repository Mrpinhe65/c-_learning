// 可以把函数声明写在.hpp的头文件中
// 可以把函数定义等写在另一个.hpp的头文件中
// 在源文件中按顺序把.hpp写在编译预处理命令中
#include"p055-函数-函数的分文件编写.hpp"
#include"p055-函数-函数体文件.hpp"

int main(){
	test01();
	test02("有参无返");
	cout<<test03()<<endl;
	cout<<test04("有参有返")<<endl;
	return 0;
}


