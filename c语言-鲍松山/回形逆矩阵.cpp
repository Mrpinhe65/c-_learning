/*************************************************************************
    > File Name: 回形逆矩阵.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年05月26日 星期日 07时20分52秒
 ************************************************************************/
#include<stdio.h>

int main(){
	int n=0;
	printf("输入回形逆矩阵的行列数n：");
	scanf("%d",&n);
	int ar[n][n]={};
	
	// 回形矩阵ReturnMatrix 数据生成
	/*
	            col_left
	row_top     1   2   3   4   5
	            16  17  18  19	6
	            15  24  25  20  7
	            14	23	22  21  8
	row_bottom  13  12  11  10  9
	                           col_right
	 回形逆矩阵如下：
				1  12   11   10
				2  13   16   9
				3  14   15   8
				4   5    6   7

*/
	int row_top=0;
	int col_left=0;
	int row_bottom=n-1;
	int col_right=n-1;
	int i=0;
	int x=1;
	while(x<=n*n){
		// 行++，列不变，x++，之后：左列++
		for(int i=row_top;i<=row_bottom;++i){
			ar[i][col_left]=x;
			x++;
		}
		col_left++;
		//底行不变，左列++，之后，底行--
		for(int i=col_left;i<=col_right;++i){
			ar[row_bottom][i]=x;
			x++;
		}
		row_bottom--;
		//底行--，右列不变，之后，右列--
		for(int i=row_bottom;i>=row_top;--i){
			ar[i][col_right]=x;
			x++;
		}
		col_right--;
		//右列--，顶行不变,之后，顶行++
		for(int i=col_right;i>=col_left;--i){
			ar[row_top][i]=x;
			x++;
		}
		row_top++;
	i++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d",ar[i][j]);
		}
	printf("\n");
	}
	return 0;
}
