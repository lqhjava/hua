#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void reverse_string(char* arr)
{
	//ͨ���ݹ��������ַ������������������ַ���

	if (*arr){                   
		reverse_string(arr + 1);
		printf("%c", *arr);   
	}

}
int main()
{
	/*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
		ʵ�֣��������ַ����е��ַ��������С�
		Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
	char arr[10] = { "helloword" };
	reverse_string(arr);
	system("pause");	
	return 0;
}