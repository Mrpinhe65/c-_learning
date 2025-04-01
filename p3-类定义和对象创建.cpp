/*************************************************************************
    > File Name: p3-类定义和对象创建.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月04日 星期四 11时27分10秒
 ************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;

class CGoods //定义类
{
	public: //公有属性
		void RegisterGoods(const char name,int amount,float price){
			strcpy(Name,const char *name);
			Amount=amount;
			Price=price;
		}

		void CountTotal(void){
			Total_value=Price*Amount;
		}
		
		void GetNmae(const char *name){
			strcpy(const char *name,Name);
		}//读取商品名
		
		int GetAmount(void){
			return Amount;
		}//读取商品数量
		
		float GetPrice(void){
			return Price;
		} //读取商品单价
		
		float GetTotal_value(void){
			return Total_value;
		}
	
	//protected: //保护
	private: //私有属性
		const char Name[21];
		int Amount;
		float Price;
		float Total_value;
};

int main(){

	CGoods c1;
	CGoods c2; //对象，实例化
	c1.RegisterGoods("C++",10,45);
	c2.RegisterGoods("Java",5,43);

	return 0;
}
