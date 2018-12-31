#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	
		/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
		嫌疑犯的一个。以下为4个嫌疑犯的供词。
		A说：不是我。
		B说：是C。
		C说：是D。
		D说：C在胡说
		已知3个人说了真话，1个人说的是假话。
		现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
	//1. 每个人都有两种情况：是凶手 不是凶手
	//2. 满足abcd的情况的一种就可一判断凶手
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0; 
	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				for (d = 0; d <= 1; d++)
				{
					   /*A说：不是我。
						B说：是C。
						C说：是D。
						D说：C在胡说*/
					//a b c d三真一假
					if ((a + b + c + d) == 1)
					{

						if (((a == 0) + (c == 1) + (d == 1) + (d == 0)) == 3)
						{

							printf("a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);

						}
					}
				}
			}
		}
	}
	system("pause");	
	return 0;
}