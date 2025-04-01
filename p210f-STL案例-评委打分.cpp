/*
STL案例-评委打分
5名选手 ABCDE
10个评委打分，去除最高分，去除最低分，取平均分
*/

/*
 * 实现步骤
 * 1.创建五名选手，放到vector
 * 2.遍历vector容器，取出每位选手
 * 3.执行for循环，把10个评委打分存到deque
 * 4.sort算法对deque容器中分数排序，去掉最高分和最低分
 * 5.获取平均分
 */

/*
随机数种子
#include<ctime>
srand((unsigned int)time(nullptr))
rand()
要产生[m,n]范围内的随机数num：
int num = rand() % (n - m + 1) + m
*/

#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime> //随机数种子srand((unsigned int)time(nullptr))需要的时间头文件
using namespace std;

//选手类
class Contestant
{
public:
	Contestant(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;	//姓名
	int m_Score;	//评分
};

void createContestant(vector<Contestant>&v)
{
	string nameSeed = "ABCDE";
	for(int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Contestant c(name,score);

		v.push_back(c);

	}
}

//打分评分
void scoring(vector<Contestant>&v)
{
	for(vector<Contestant>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委分数放入容器deque
		deque<int>d;
		cout << it->m_Name <<"得分：" ;
		for(int i = 0; i < 10; i++)
		{
			//给60~100分的随机数
			int score = rand() % 41 + 60;
			d.push_back(score);
			cout << score << " ";
		}
		cout << endl;
		
		//sort排序
		sort(d.begin(),d.end());
		
		//去掉最低分、去掉最高分
		d.pop_front();
		d.pop_back();
		
		//取平均分
		int sum = 0;
		for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		//计算平均分
		int avg =sum / d.size();
		it->m_Score = avg;
	}
}

void showScore(vector<Contestant>&v)
{
	for(int i = 0; i < v.size(); i++)
	{
		cout << "Name: " << v[1].m_Name << ", score: " << v[i].m_Score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(nullptr));

	//1.创建5名选手
	vector<Contestant>v;	//存放选手容器
	createContestant(v);
	//测试5名选手是否在vector中
	for(vector<Contestant>::iterator it = v.begin(); it != v.end(); it++)
	{
		//it 为Contestant指针,可以 it->m_Name
		//(*it) 为Contestant，可以(*it).m_Name 
		cout << "name = " << it->m_Name << ", score = " << it->m_Score << endl;
		//cout << "name = " << (*it).m_Name << ", score = " << (*it).m_Score << endl;
		cout << endl;
	}

	//2.给5名选手打分
	scoring(v);

	//3.显示最后得分
	showScore(v);

	return 0;
}
