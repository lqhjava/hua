#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*��д����ģ��������������ĳ�����
	����������������룬������ȷ����ʾ����¼�ɹ���, �������
	�����������룬����������Ρ����ξ�������ʾ�˳�����*/
	//1 ������һ������
	int password = 1234;
	//2 �û��������룬ֻ��3�λ���
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		//��ʼ��������
		printf("���������룺\n");
		int psword = 0;
		scanf("%d", &psword);
		if (psword == password)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 4)
	{
		printf("�����Դ���3�Σ��˳�����\n");
	}


	system("pause");	
	return 0;
}