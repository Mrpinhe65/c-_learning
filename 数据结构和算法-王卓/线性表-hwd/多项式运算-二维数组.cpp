/*************************************************************************
    > File Name: 多项式运算-二维数组.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月07日 星期一 01时50分41秒
 ************************************************************************/
/*
二维数组的创建----new
int (*array)[col] = new int[row][col];
 
二维数组的传参和形参
1.0 方式一  静态二维数组
1.0.1 viod func(int array[][2], int row);
2.0 方式二 动态二维数组----指针
2.0.1 void func(int ** array, int row, int col);
3.0 方式三 动态二维数组----引用
3.0.1 void func(int (& array)[int row][int col]);
*/
/*
1. 多项式
A(x)=7+3x+9X^8+12x^9+21x^12+6x^16+3x^21+5x^32+3x^8-2x^16
2. 用二维数组表示，数组行数代表多项式项数，列数为二
其中每两个数据----第一个代表 系数 第二个 代表 指数
2.1 A[][2]={{7,0},{3,1},{9,8},{12,9},{21,12},{6,16},{3,21},{5,32},{3,8},{-2,16}};
3. 去重和合并：
3.1先检查数组元素个数必须为偶数；
3.2指数相同项合并，系数为零的项删除，并记录项数，每两个元素代表一项
4. 如原多项式存在项数减少的：按项数新建一维数组，将原数组合并到新数组中
5. 第二个多项式 B(x) 重复以上 3. 4.
6. 原多项式经过上述处理后，A、B 两个多项式各自都没有指数相同的项和系数为零的项
7. 循环每个多项式，得出A的项数numA和B的项数numB，同时对比A和B的指数
8. 指数相同的项，计数器num++；
9. 指数相同项的系数相加，如果为零，计数器num++
10. 对比完成后可以确定新数组的元素个数(=项数*2) (numA+numB-num)*2
11.按元素个数创建新一维数组，将A和B合并到新数组中
12.按指数(元素下标奇数的，即每组第二个数)升序排序
13.运算 秦九韶方法
14. f(x)=A0+x(a1+x(A2+...+x((An-1+x(An)))));
15 伪代码
p=A[n];
for(int i=n;i>0;i--)
{
	p=A[i-1]+x*p;
}
return p;
*/

#include<iostream>
#include<string>
#include<cmath>
#include<typeinfo>
using namespace std;

//多项式A和多项式B数据合并，存入多项式C，之后释放A和B----delete
void mergeArray(int(*arrayA)[2], int rowA, int(*arrayB)[2], int rowB);

//多项式按数学公式式样显示：f(x)=A0X^0+A1x^1+...+AnX^n
void showPolynomial(int (*arr)[2], int row);

//顺序累加
double sequenceAccumulation(int (*arr)[2], int row, double x);

//秦九韶多项式计算法
double Qinjiushao(int (* arr)[2], int row, float x);

int main()

{
	//通过new方法创建多项式二维数组
	//每行数组元素：
	//第一个表示多项式的系数
	//第二个表示多项式的指数

	system("clear");
	
	//输入需要计算的f(X)的x值
	cout<<"输入需要计算的f(X)的x值 X= ";
	double x;
	cin>>x;

	//多项式B
	int rowA=12;//行数，多项式也可设计成循环输入
	//根据行数，开辟堆区二维数组,并初始化
	int	(*arrayA)[2]=new int[rowA][2]
	{
		{7,0},{3,1},{9,8},{12,9},{21,12},
		{6,16},{3,21},{5,32},{3,8},{-2,16},
		{4,18},{7,25}
	};
	cout<<"杂乱无序多项式A  =================================================================================================================================="<<endl;
	showPolynomial(arrayA, rowA);
	
	//多项式B
	int rowB=17;//行数，多项式也可设计成循环输入
	//根据行数，开辟堆区二维数组，并初始化
	int (*arrayB)[2]=new int[rowB][2]
	{
		{3,0},{7,5},{5,4},{17,7},{2,3},
		{9,8},{13,11},{8,12},{-7,8},{-5,13},
		{11,16},{-13,28},{-14,30},{4,31},{-8,32},
		{9,33},{2,35}
	};
	cout<<"杂乱无序多项式B  =================================================================================================================================="<<endl;
	showPolynomial(arrayB, rowB);
	//多项式A和多项式B数据合并，存入多项式C，之后释放A和B----delete
	int rowC = rowA + rowB;
	int (*arrayC)[2]=new int[rowC][2];
	for(int i = 0; i < rowA; i++)
	{
		for(int j = 0; j < 2;j++)
		{
			arrayC[i][j]=arrayA[i][j];
		}
	}
	for(int i = 0; i < rowB; i++)
	{
		for(int j = 0; j < 2;j++)
		{
			arrayC[rowA + i][j]=arrayB[i][j];
		}
	}
	cout<<"A和B合并后的原始杂乱无序多项式C  =================================================================================================================="<<endl;
	showPolynomial(arrayC, rowC);

	//delete A 和 B
	delete[] arrayA;
	if(arrayA != nullptr){
		arrayA = nullptr;
	}
	delete[] arrayB;
	if(arrayB != nullptr){
		arrayB = nullptr;
	}

	//多项式二维数组合并指数相同项
	for(int i = 0; i < rowC-1; i++)
	{
		for(int j= i+1; j < rowC; j++)
		{
			if(arrayC[j][1] == arrayC[i][1])
			{
				
				arrayC[i][0] += arrayC[i][0];
				arrayC[j][0] = 0;
			}
		}
	}

	int decrement=0;//销项计数器
	for(int i = 0; i < rowC; i++)
	{
		if(arrayC[i][0] == 0)
		{
			decrement ++;
		}
	}
	int rowD = rowC - decrement;
	int (*arrayD)[2] = new int [rowD][2];
	int count = 0;//计数器
	for(int i = 0; i < rowC; i++)
	{
		if(count == rowD)
		{
			break;
		}
		if(arrayC[i][0] != 0)
		{
			arrayD[count][0]=arrayC[i][0];
			arrayD[count][1]=arrayC[i][1];
			count ++;
		}
	}
	/*
	for(int i = 0; i < rowD; i++)
	{
		cout<<"{"<<arrayD[i][0]<<",";
		cout<<arrayD[i][1]<<"}"<<endl;
	}
	*/

	//delete C
	delete [] arrayC;
	if(arrayC != nullptr)
	{
		arrayC = nullptr;
	}

	//多项式排序-按指数升序排序
	for(int i = 0; i<rowD-2; i++)
	{
		for(int j = i + 1; j < rowD - 1; j++)
		{
			if(arrayD[i][1] > arrayD[j][1])
			{
				int temp = arrayD[i][1];
				arrayD[i][1]=arrayD[j][1];
				arrayD[j][1]=temp;

				temp = arrayD[i][0];
				arrayD[i][0]=arrayD[j][0];
				arrayD[j][0]=temp;
			}
		}
	}
	
	//多项式按数学公式式样显示：f(x)=A0X^0+A1x^1+...+AnX^n
	cout<<"合并排序后，最终进入运算的顺序多项式====================================================================================================================================================="<<endl;
	showPolynomial(arrayD, rowD);
	
	/*
	cout<<"f(x) = ";
	for(int i=0;i<rowD;i++)
	{
		cout<<arrayD[i][0]<<"*X^";
		if(i == rowD - 1)
		{
			cout<<arrayD[i][1]<<endl;
			break;
		}
		if(arrayD[i+1][0] > 0)
		{
			cout<<arrayD[i][1]<<" + ";
		}
		else
		{
			cout<<arrayD[i][1]<<" ";

		}
	}
	cout<<endl;
	*/

	
	//多项式运算
	//顺序累加
	double result = sequenceAccumulation(arrayD, rowD, x);
	/*
	double result = 0;
	for(int i = 0; i < rowD; i++){
		result += arrayD[i][0]*pow(x,arrayD[i][1]);o
	}
	*/
	//输出计算结果
	cout<<"逐项累加(笨办法)计算结果========================="<<endl;
	cout<<"f(x)= "<<result<<endl;

	//秦九韶法：
	//----先把系数多项式转换成 标准多项式----指数逐项递增
	//----指数逐项递增，系数为零
	//----运用秦九韶法计算
	int rowE=arrayD[rowD-1][1] + 1;//最大指数，即标准多项式最大项数
	//创建元素全部为零的堆区数组E
	int (*arrayE)[2] = new int[rowE][2];
	for(int i = 0; i < rowE; i++)
	{
		arrayE[i][0] = 0;
		arrayE[i][1] = 0;
	}
	//将系数多项式D的有效项放入数组E
	for(int i = 0; i < rowD; i++)
	{
		/*
		int row = arrayD[i][1]+1;
		cout<<"row="<<endl;
		getchar();
		*/
		arrayE[arrayD[i][1]][0]=arrayD[i][0];
		arrayE[arrayD[i][1]][1]=arrayD[i][1];
	}
	//显示标准多项式	
	//showPolynomial(arrayE, rowE);

	//秦九韶多项式计算法
	result = Qinjiushao(arrayE, rowE, x);

	//输出计算结果
	cout<<"秦九韶法计算结果================================="<<endl;
	cout<<"f(x)= "<<result<<endl;
	
	//释放E----delete D
	delete[] arrayD;
	if(arrayD != nullptr)
	{
		arrayD = nullptr;
	}
	
	return 0;
}

//多项式A和多项式B数据合并，存入多项式C，之后释放A和B----delete
void  mergeArray(int(*arrayA)[2], int rowA, int(*arrayB)[2], int rowB)
{
	int (*arrayC)[2]=new int[rowA + rowB][2];
	/*
	for(int i = 0; i < rowA; i++)
	{
		arrayC[i] = arrayA[i];
	}
	for(int i = 0; i < rowB; i++)
	{
		arrayC[rowA + i]=arrayB[i];
	}
	*/
	cout<<typeid(arrayC).name()<<endl;
	getchar();
	//return arrayC;
}

//多项式按数学公式式样显示：f(x)=A0X^0+A1x^1+...+AnX^n
void showPolynomial(int (*arr)[2], int row)
{
	cout<<"f(x) = ";
	for(int i = 0; i < row; i++)
	{
		cout<<arr[i][0]<<"*X^";
		if(i == row - 1)
		{
			cout<<arr[i][1]<<endl;
			break;
		}
		if(arr[i+1][0] >= 0)
		{
			cout<<arr[i][1]<<" + ";
		}
		else
		{
			cout<<arr[i][1]<<" ";

		}
	}
	cout<<endl;
}

//多项式运算
//顺序累加
double sequenceAccumulation(int (*arr)[2], int row, double x)
{
	double res = 0;
	for(int i = 0; i < row; i++){
		res += arr[i][0]*pow(x,arr[i][1]); 
	}
	return res;
}

//秦九韶多项式计算法
double Qinjiushao(int (* arr)[2], int row, float x)
{
	double p=arr[row][0];
	for(int i = row; i > 0; i --)
	{
		p = arr[i-1][0] + x*p;
		/*test
		cout<<"arr[="<<i - 1<<"]="<<arr[i - 1]<<endl;
		cout<<"p="<<p<<endl;
		*/
	}
	return p;
}
