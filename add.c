#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
	//查找1到100之间出现了多少次9
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
		{
			count = count + 1;
		}
		if (i % 10 == 9)
		{
			count = count + 1;
		}
		if ((i / 10 == 9) && (i % 10 == 9))
		{
			count = count - 1;
		}
	}
	

	printf("1到100之间出现了%d次9\n", count);

	
	system("pause");	
	return 0;
}