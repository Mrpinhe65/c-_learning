/*************************************************************************
    > File Name: 二维数组和指针.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年07月04日 星期四 07时26分01秒
 ************************************************************************/
#include<iostream>

using namespace std;
/*
 a[3][5]                +0   +1      +2     +3     +4      行指针
                 a[0]   1     2      3      4      5     ==a

				列指针 *(a+1)+0     *(a+1)+2     *(a+1)+4
                 a[1]   6     7      8      9      10    ==a+1

				列指针*(a+2)+0      *(a+2)+2       *(a+2)+4
			     a[2]   11    12     13     14     15    ==a+2

				a[2]+3===a[2][3]的地址
				*(a[2]+3)===a[2][3]
				*(a+2)===a[2]的地址
				*(*(a+i)+j)===a[i][j]
*/

void array1(){

	int arr[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	cout<<"arr[0]"<<arr[0]<<endl;
	cout<<"arr[1]"<<arr[1]<<endl;
	cout<<"arr[2]"<<arr[2]<<endl;
	//cout<<"arr[1]-arr[0]="<<arr[1]-arr[0]<<endl;
	//cout<<"arr[2]-arr[1]="<<arr[2]-arr[1]<<endl;
	cout<<"&(arr[0]+1)="<<(arr[0]+1)<<endl;
	cout<<"*(arr[0]+1)="<<*(arr[0]+1)<<endl;
	cout<<"*(arr[1]+1)="<<*(arr[1]+1)<<endl;
	cout<<"*(arr[2]+1)="<<*(arr[2]+1)<<endl;

	cout<<"行指针arr  ="<<arr<<endl;
	cout<<"行指针arr+1="<<arr+1<<endl;
	cout<<"行指针arr+2="<<arr+2<<endl;

	cout<<"arr[2][2]的指针*（arr+2）+2   ="<<*(arr+2)+2<<endl;
	cout<<"arr[2][2]的值*（*（arr+2）+2）="<<*(*(arr+2)+2)<<endl;
	cout<<"arr[2]的地址 *(arr+2)         ="<<*(arr+2)<<endl;
	cout<<"arr[2][3]=*(*(arr+2)+3)==="<<*(*(arr+2)+3)<<endl;

}

int main(){
	
	array1();
	return 0;

}
