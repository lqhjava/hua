#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
	例如：2 + 22 + 222 + 2222 + 22222*/
	printf("请输入数字；\n");
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int sum = 0;
	int add = num;
	for (i = 1; i <= 5; i++)
	{
		sum = sum + add;
		add = add * 10 + num;
	}
	printf("%d\n", sum);

	system("pause");
	return 0;
}