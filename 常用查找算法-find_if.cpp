/*************************************************************************
    > File Name: 常用查找算法-find_if.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月22日 星期一 13时41分29秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<string>
#include<functional>
#include<vector>
using namespace std;

//查找内置数据

class GreaterNum{
	public:
		bool operator()(int val){
			return val>11;
		}
};

void test01(){
	vector<int>v;
	for(int i=0;i<20;i++){
		v.push_back(i);
	}
	for(auto num:v){
		cout<<num<<" ";
	}
	cout<<endl;

	vector<int>::iterator it=find_if(v.begin(),v.end(),GreaterNum());
	if(it==v.end()){
		cout<<"No found"<<endl;
	}
	else
	{
		cout<<"Found the Num="<<*it<<endl;
	}
}

//查找自定义数据类型
class Person{
	public:
		Person(string name,int age){
			this->Name=name;
			this->Age=age;
		}
		string Name;
		int Age;
};

class FindNum{
	public:
		bool operator()(Person&p){
			return p.Age>20;
		}
};

void test02(){
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	Person p5("eee",50);

	vector<Person>v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("xxx",30);
	vector<Person>::iterator it=find_if(v.begin(),v.end(),FindNum());
	if(it==v.end())
	{
		cout<<"Not Found"<<endl;
	}
	else
	{
		cout<<"Found >20: "<<it->Name<<", "<<it->Age<<endl;
	}

}

int main(){
	test01();
	test02();
	return 0;
}
