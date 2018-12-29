#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void reverse_string(char* arr)
{
	//通过递归来遍历字符串，遍历到最后，输出字符串

	if (*arr){                   
		reverse_string(arr + 1);
		printf("%c", *arr);   
	}

}
int main()
{
	/*编写一个函数 reverse_string(char * string)（递归实现）
		实现：将参数字符串中的字符反向排列。
		要求：不能使用C函数库中的字符串操作函数。*/
	char arr[10] = { "helloword" };
	reverse_string(arr);
	system("pause");	
	return 0;
}