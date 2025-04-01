/*************************************************************************
    > File Name: hm-p139结构体的定义.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月28日 星期日 16时08分20秒
 ************************************************************************/
#include"public.hpp"
#include<cstring>

struct GirlFriend{
	char name[100];
	int age;
	float height;
};

int main(){

	struct GirlFriend gf1;
	strcpy(gf1.name,"LiuXiaoLi");
	gf1.age=19;
	gf1.height=1.63;

	cout<<gf1.name<<","<<gf1.age<<","<<gf1.height<<endl;

	struct GirlFriend gf2;
	strcpy(gf2.name,"LuoXiaoLan");
	gf2.age=21;
	gf2.height=1.59;
	cout<<gf2.name<<","<<gf2.age<<","<<gf2.height<<endl;

	//定义时直接赋值
	struct GirlFriend gf3={"xiaolongnnv",24,1.56};
	cout<<gf3.name<<","<<gf3.age<<","<<gf3.height<<endl;

	//结构体数组
	struct GirlFriend gfArr[3]={gf1,gf2,gf3};

	//遍历结构体数组
	for(int i=0;i<3;i++){
		struct GirlFriend temp=gfArr[i];
		cout<<"Name: "<<temp.name<<",Age: "<<temp.age<<",Height： "<<temp.height<<endl;
	}
	

	return 0;
}
