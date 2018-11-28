#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*1.在屏幕上输出以下图案：
	*
	***
	*****
	*******
	*********
	***********
	*************
	***********
	*********
	*******
	*****
	***
	**
	*/
	int i = 0;
	int j = 0;
	// 上半部分
	//控制行数
	for (i = 1; i <= 7; i++)
	{
		//打印*
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i >= 1; i--)
	{
		//打印*
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}