#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*1.����Ļ���������ͼ����
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
	// �ϰ벿��
	//��������
	for (i = 1; i <= 7; i++)
	{
		//��ӡ*
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i >= 1; i--)
	{
		//��ӡ*
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}