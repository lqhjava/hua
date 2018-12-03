#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*编写代码模拟三次密码输入的场景。
	最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
	可以重新输入，最多输入三次。三次均错，则提示退出程序。*/
	//1 先设置一个密码
	int password = 1234;
	//2 用户输入密码，只有3次机会
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		//开始输入密码
		printf("请输入密码：\n");
		int psword = 0;
		scanf("%d", &psword);
		if (psword == password)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 4)
	{
		printf("密码以错误3次，退出程序\n");
	}


	system("pause");	
	return 0;
}