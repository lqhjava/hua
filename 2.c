#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//jie函数 递归来算n的阶乘
int jie(int n)
{
	//n! = n * (n-1)!
	//(n-1)! = (n -1) * (n-2)!
	//.......
	//2! = 2 * 1
	//1! = 1
	if (n == 1)
	{
		return 1;
	}
	else
	{
	   return n * jie(n - 1);
	}

}
int main()
{
	//编写一个函数实现n^k，使用递归实现 
	int num = 0;
	printf("请输入要求的阶乘：");
	scanf("%d",&num);
	int ret = jie(num);
	printf("%d\n",ret);
	system("pause");	
	return 0;
}