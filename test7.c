#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void Printf(int n)
{
	if (n > 10)
	{
		Printf(n / 10);
	}
	printf("%d ",n%10);
}
int main()
{
	//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
	int num = 0;
	printf("������һ�����֣�\n");
	scanf("%d", &num);
	Printf(num);
	
	system("pause");	
	return 0;
}