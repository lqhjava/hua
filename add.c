#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
	//����1��100֮������˶��ٴ�9
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
	

	printf("1��100֮�������%d��9\n", count);

	
	system("pause");	
	return 0;
}