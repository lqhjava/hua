#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu(){
	printf("*******************************\n");
	printf("*******   1 ��ʼ��Ϸ    *******\n");
	printf("*******   0 ������Ϸ    *******\n");
	printf("*******************************\n");
}
void game()
{
	//1 ����Ҫ����һ��1-100�ڵ������
	int gusse_num = rand() % 100 - 1;
	while (1){
	//2 �û����в²�
	printf("��²�һ�����֣�\n");
	int gusse = 0;
	scanf("%d", &gusse);
	//3 �Բ²����ֽ��бȽ�
	// �´���
	
		if (gusse > gusse_num)
		{
			printf("�´���\n");
		}
		//��С��
		if (gusse < gusse_num)
		{
			printf("��С��\n");
		}
		//�¶���
		if (gusse == gusse_num)
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	
	//rand�������õ�����
	srand((unsigned)time(NULL));
	//����һ�������ֵ���Ϸ
	//1.���ȣ���һ���˵�����ѡ��
	menu();
	//2.�û�����ѡ��

	printf("��ѡ��\n");
	while (1){
		int choose = 0;
		scanf("%d", &choose);
		//   ѡ��1 ��ʼ��Ϸ
		if (choose == 1)
		{
			//��ʼ��Ϸ
			game();
			menu();
		}
		//������Ϸ
		else if (choose == 0)
		{
			printf("������Ϸ\n");
			break;
		}
		//�������
		else
		{
			printf("����������������룻\n");
		}
	}
	system("pause");	
	return 0;
}