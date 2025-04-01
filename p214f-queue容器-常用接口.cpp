
/*
	queue 容器
	队列--先进先出
	不允许遍历
	队尾 back 入队 push
	队头 front 出队 pop
	empty()
	size()
*/

#include<iostream>
#include<queue>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	//创建队列
	queue<Person>q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//判断队列只要不为空，查看对头，查看队尾，出队
	while(!q.empty())
	{
		//队列元素个数
		cout << "队列元素个数：" << q.size() << endl;

		//查看队头元素
		cout << "队头 name " << q.front().m_Name << ", age " << q.front().m_Age << endl;

		//查看队尾元素
		cout << "队尾 name " << q.back().m_Name << ", age " << q.back().m_Age << endl;

		//出队
		q.pop();
	}
}

int main()
{
	test01();
	return 0;
}
