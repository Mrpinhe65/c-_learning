/*************************************************************************
    > File Name: 容器queue-常用接口.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月18日 星期四 18时16分46秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<queue>

class Person{
	public:
		Person(string name,int age){
			this->m_Name=name;
			this->m_Age=age;
		}
		string m_Name;
		int m_Age;
};

void test01(){
	queue<Person>q;
	
	Person p1("唐僧",39);
	Person p2("猪八戒",33);
	Person p3("孙悟空",34);
	Person p4("沙和尚",41);
	Person p5("白龙马",10);
	
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<"队头front=="<<q.front().m_Name<<", 年龄=="<<q.front().m_Age<<endl;

		cout<<"队尾back=="<<q.back().m_Name<<", 年龄=="<<q.back().m_Age<<endl;
		q.pop();
	}
}

int main(){

	test01();

	return 0;
}
