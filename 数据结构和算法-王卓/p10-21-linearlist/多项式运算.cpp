/*************************************************************************
    > File Name: 多项式运算.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月03日 星期四 09时09分24秒
 ************************************************************************/
/*
1. 多项式运算
1.1 A(x)=7x^0+3x^1+9x^8+5x^17
1.2 线性表二维数组A[M][N]表示(M=4,const N=2): A[4][2]=((7,0),(3,1),(9,8),(5,17))
1.3 B(x)=8x^1+22x^7-9x^8
1.4 线性表二维数组B[M][N]表示(M=3,const N=2): B[3][2]=((8,1),(22,7),(-9,8))
2. 假设设定一个新二维数组C[M][N], const N=2
2.1 暂定数组C[M][N]的M=4+3=7,const N=2
2.2 遍历二维数组A和B的M,如有指数项相同，M的增量DTM减1
2.3 遍历结束后，M=M+DTM，(DTM<=0)
2.4 创建二维数组C[M][N],对A、B进行指数相同项合并运算，结果存到数组C
2.5 数组C即为运算结果，可用引用或指针返回 

3. 二维数组传参建议
3.1 void getArray(int arr[][],int M,int N); //M 行数， N 列数
3.2 void getArray(int (*arr)[],int M,int N); 
3.3 封装在结构体或者类中，直接传递
3.3.1 结构体示例
3.3.2 struct Arr
		{
			int *array;
			int row;
			int col;
		};
3.3.3 main中
	  int arr[][2]={1,2,11,12,21,22,31,32};//M=4,N=2
	  Arr st={arr,4,2};
*/ 

#include<iostream>
using namespace std;

//指针在结构体中
struct Arr
{
	int *array;//按一维数组使用
	int row;//行
	int col;//列
};

/*
//二维数组在结构体中
struct ArrayTwo
{
	int s_arrTwo[][2];//二维数组，列数2
	int s_num;//行数
};
*/

int arrayOneDimensional(int *arr,int num)
{
	cout<<"一维数组"<<endl;
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	arr[0]=999;
	cout<<"=========================="<<endl;
	return 0;
}


void arrayTwoDimensional(int (*arr)[2],int row,int col)
{
	cout<<"二维数组====================="<<endl;
	cout<<"*arr[0]="<<*arr[0]<<endl;
	cout<<"arr[1][1]="<<arr[1][1]<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	arr[1][1]=1111;
	cout<<endl;
	cout<<"=============================="<<endl;
}
//声明
//void inStruct(ArrayTwo at);

int main()
{
	int a[][2]={{7,0},{3,1},{9,8},{5,17}};
	int b[][2]={{8,1},{22,7},{-9,8}};

	int arr[][2]={1,2,11,12,21,22,31,32};//M=4,N=2
	arrayTwoDimensional(arr,4,2);
	cout<<"===============arr[1][1]===="<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	cout<<endl;
	cout<<"===============arr[1][1]===="<<endl;

	int arr1[]={1,2,11,12,21,22,31,32};
	arrayOneDimensional(arr1,8);
	
	cout<<"==========================="<<endl;
	cout<<"sizeof int="<<sizeof(int)<<endl;//4
	cout<<"In Main arr="<<sizeof(arr)<<endl;//32
	cout<<"In Main arr[0]="<<sizeof(arr[0])<<endl;//8
	cout<<"In Main arr1="<<sizeof(arr1)<<endl;//32
	cout<<"In Main arr1[0]="<<sizeof(arr1[0])<<endl;//4
	cout<<"arr[0]="<<*arr[0]<<endl;
	for(int i=0;i<8;i++)
	{
		cout<<"arr1[i]= "<<arr1[i]<<" ";
	}
	cout<<endl;
	cout<<"结构体================================="<<endl;
	Arr st;
	st.array=arr1;
	st.row=4;
	st.col=2;
	for(int i=0;i<st.row*st.col;i++)
	{
		cout<<st.array[i]<<" ";
	}
	cout<<endl;
	/*
	cout<<"二维数组在结构体中===================="<<endl;
	ArrayTwo at;
	at.s_arrTwo[][2]={1,2,11,12,111,222,1111,2222};
	at.s_num=4;//行=4
	inStruct(at);
	*/
	return 0;
}

/*
void inStruct(ArrayTwo sat)
{
	cout<<"二维数组结构体传入函数====================="<<endl;
	cout<<"s_num="<<sat.s_num<<endl;
	for(int i=0;i<sat.s_num;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<sat.s_arrTwo<<endl;
		}
	}
	cout<<endl;
}
*/
