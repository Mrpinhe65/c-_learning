/*************************************************************************
    > File Name: 结构体的指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月07日 星期日 10时13分19秒
 ************************************************************************/
#include"iostream"
using namespace std;

struct Student{
	int id;
	string name;
	int age;
	float score;
};

int main(){
	struct Student st={
		1001,"hwd",59,98
	};
	cout<<"st.id=="<<st.id<<endl;
	cout<<"st.namne=="<<st.name<<endl;
	cout<<"st.age=="<<st.age<<endl;
	cout<<"st.score=="<<st.score<<endl;
	struct Student *p=&st;
	cout<<"结构体指针p=="<<p<<endl;
	cout<<"结构体指针p+1=="<<p+1<<endl;
	cout<<"结构体指针p+2=="<<p+2<<endl;
	cout<<"结构体指针p+3=="<<p+3<<endl;
	cout<<"结构体指针p+4=="<<p+4<<endl;
	cout<<"结构体st.id指针=="<<&st.id<<endl;
	cout<<"结构体st.name指针=="<<&st.name<<endl;
	cout<<"结构体st.age指针=="<<&st.age<<endl;
	cout<<"结构体st.score指针=="<<&st.score<<endl;
	cout<<"结构体指针p->name=="<<p->name<<endl;
	cout<<*(&st.name)<<endl;

	return 0;
}
