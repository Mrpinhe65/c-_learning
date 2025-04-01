/*************************************************************************
    > File Name: 容器map-multimap-排序规则.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月21日 星期日 11时50分04秒
 ************************************************************************/
#include<iostream>
#include<map>
#include<string>
using namespace std;

class MyCompare{
	public:
		bool operator()(const int& v1,const int& v2) const 
		{
			return v1>v2;
		}
};

void printMap(map<int,int,MyCompare>&m) 
{
	for(map<int,int,MyCompare>::const_iterator it=m.begin();it!=m.end();it++){
		cout<<"key="<<it->first<<", value="<<it->second<<endl;
	}
}

void test(){
	map<int,int,MyCompare>m;
	m.insert(make_pair(2,20));
	m.insert(make_pair(1,10));
	m.insert(make_pair(5,50));
	m.insert(make_pair(4,40));
	m.insert(make_pair(3,30));
	printMap(m);
}

int main(){
	test();
	return 0;
}
