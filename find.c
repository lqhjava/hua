#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int find(int arr[], int left, int right, int key)
{
	//�۰����
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;

		}
		else if (arr[mid] > key)
		{
			right = mid - 1;

		}
		else
		{
			return mid;
		}
	}
	return -1;

}
int main()
{
	/*
	д����������������������в�����Ҫ�����֣�
	�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
	*/
	
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	for (i = 0; i < 10; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("������Ҫ�ҵ���\n");
	int key = 0;
	
	scanf("%d", &key);
	int left = 0;
	int right = 9;
	//����
	int ret = find(arr, 0, 9, key);
	if (ret)
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
	}
	else 
	{
		printf("û�ҵ�\n");
	}
	
	system("pause");	
	return 0;
}