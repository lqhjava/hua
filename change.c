#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*��дһ�����򣬿���һֱ���ռ����ַ���
	�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
	������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
	��������ֲ������*/
	printf("������һ���ַ�\n");
	while(1){
		
		char input = 0;
		scanf("%c", &input);
		if (input >= 'a' &&input <= 'z')
		{
			//��Сд���ɴ�д
			printf("%c\n", input - 32);
			continue;
		}
		if (input >= 'A'&& input <= 'Z')
		{
			//�Ѵ�д����Сд
			printf("%c\n", input + 32);
			continue;
		}
		if (input >= '0'&&input <= '9')
		{
			continue;
		}
	} 
	system("pause");	
	return 0;
}