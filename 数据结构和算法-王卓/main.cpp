/*************************************************************************
    > File Name: main.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月24日 星期三 11时34分15秒
 ************************************************************************/
#include"SeqList.h"

int main(){
	SeqList mylist;
	InitSeqList(&mylist);

	int select=1;
	while(select){
		printf("***************************************\n");
		printf("*[1] push_back          [2] push_front*\n");
		printf("*[3] show_list          [4] pop_back  *\n");
		printf("*[5] pop_front          [6] insert_pos*\n");
		printf("*[7] find               [8] lenght    *\n");
		printf("*[9] delete_pos         [A] delete_val*\n");
		printf("*[B] sort               [C] reverse   *\n");
		printf("*[D] clear              [E] destroy   *\n");
		printf("*[Q] quit_system                      *\n");
		printf("***************************************\n");

	}
	return 0;

}
