#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{/*
	����Ļ�ϴ�ӡ������ǡ�
		1
		1 1
		1 2 1
		1 3 3 1
		1 4 6 4 1
		1 5 10 10 5 1
		*/
	//1.������ǿ������Ϊһ����ά���飬�������Ͻ�Ϊ�ո����½�Ϊ�������
	int i = 0;
	int j = 0;
	int n = 0;
	printf("������Ҫ��ӡ��������ǵ�������\n");
	scanf("%d",&n);
	int arr[100][100] = {0};
	//2.�ȴ�ӡ����ߺͶԽ���
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
	//�ӵ�3�п��Ǽ����������
	system("pause");	
	return 0;
}