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
	//递归方式实现打印一个整数的每一位 
	int num = 0;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
	Printf(num);
	
	system("pause");	
	return 0;
}