#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Strlen1(char * arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	else return 1 + Strlen1(arr + 1);
}
int main()
{
	char*arr = { "adasdasdas" };
	int ret = Strlen1(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}