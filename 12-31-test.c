#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{/*
	在屏幕上打印杨辉三角。
		1
		1 1
		1 2 1
		1 3 3 1
		1 4 6 4 1
		1 5 10 10 5 1
		*/
	//1.杨辉三角可以理解为一个二维数组，不过右上角为空格，左下角为杨辉三角
	int i = 0;
	int j = 0;
	int n = 0;
	printf("请输入要打印的杨辉三角的行数：\n");
	scanf("%d",&n);
	int arr[100][100] = {0};
	//2.先打印最左边和对角线
	for (j = 0; j < n; j++)
	{
		arr[j][0] = 1;
		arr[j][j] = 1;
	}
	
	for (i = 2 ; i < n; i++)
	{
		
		
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//从第3行开是计算杨辉三角
	system("pause");	
	return 0;
}