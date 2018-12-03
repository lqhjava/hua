#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*编写一个程序，可以一直接收键盘字符，
	如果是小写字符就输出对应的大写字符，
	如果接收的是大写字符，就输出对应的小写字符，
	如果是数字不输出。*/
	printf("请输入一个字符\n");
	while(1){
		
		char input = 0;
		scanf("%c", &input);
		if (input >= 'a' &&input <= 'z')
		{
			//把小写换成大写
			printf("%c\n", input - 32);
			continue;
		}
		if (input >= 'A'&& input <= 'Z')
		{
			//把大写换成小写
			printf("%c\n", input + 32);
			continue;
		}
		if (input >= '0'&&input <= '9')
		{
			continue;
		}
	} 
	system("pause");	
	return 0;
}