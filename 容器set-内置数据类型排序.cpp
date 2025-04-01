/*************************************************************************
    > File Name: 容器set-排序.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月20日 星期六 07时11分02秒
 ************************************************************************/
#include<iostream>
#include<set>
using namespace std;

//排序规则仿函数
class MyCompare{
	public:
		bool operator()(int v1,int v2) const
		{
			return v1>v2;
		}
};


void test(){
	
	set<int>s1;
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(10);
	s1.insert(40);
	for(set<int>::iterator it=s1.begin();it!=s1.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	//set自动按升序排序

	// 使用 range-based for loop，更现代和简洁
	cout<<"auto num:s1= ";
	for (auto num : s1) {
        cout << num << " ";
    }
    cout << endl;

	//指定set按降序排序,仿函数ruleOfSort
	set<int,MyCompare>s2;
	//set<int>s2;
	s2.insert(30);
	s2.insert(20);
	s2.insert(50);
	s2.insert(10);
	s2.insert(40);

	for(set<int,MyCompare>::iterator it=s2.begin();it!=s2.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	// 使用 range-based for loop，更现代和简洁
	cout<<"auto num:s2= ";
    for (auto num : s2) {
        cout<< num << " ";
    }
    cout << endl;

}
int main(){

	test();

	return 0;
}
