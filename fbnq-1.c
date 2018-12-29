#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


int fbnq(int n)
{
	//n = n-1 +n-2
	//n-1 = n-2 +n-3
	//.......
	//3 = 2+1
	//2 = 1+1
	if (n == 2 || n == 1)
	{
		return 1;
	}
	else{
		n = fbnq(n - 1) + fbnq(n - 2);
		return n;
	}
}
int main()
{
	//用函数的递归来实现斐波那契数列
	int n = 0;
	scanf("%d",&n);
	//调用斐波那契函数
	int ret =fbnq(n);
	printf("%d\n", ret);
	system("pause");	
	return 0;
}