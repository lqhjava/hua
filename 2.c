#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//jie���� �ݹ�����n�Ľ׳�
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
	//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
	int num = 0;
	printf("������Ҫ��Ľ׳ˣ�");
	scanf("%d",&num);
	int ret = jie(num);
	printf("%d\n",ret);
	system("pause");	
	return 0;
}