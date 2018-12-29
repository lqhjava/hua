#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Strlen1(char * arr)
{
	int count = 0;
	while (*arr++ != '\0')
	{

		count++;
	}

	return count;

}
int main()
{
	 char*arr = { "adasdasdas" };
	int ret = Strlen1(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}