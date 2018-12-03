#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int find(int arr[], int left, int right, int key)
{
	//折半查找
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
	写代码可以在整型有序数组中查找想要的数字，
	找到了返回下标，找不到返回 - 1.（折半查找）
	*/
	
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	for (i = 0; i < 10; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("请输入要找的数\n");
	int key = 0;
	
	scanf("%d", &key);
	int left = 0;
	int right = 9;
	//查找
	int ret = find(arr, 0, 9, key);
	if (ret)
	{
		printf("找到了，下标为%d\n", ret);
	}
	else 
	{
		printf("没找到\n");
	}
	
	system("pause");	
	return 0;
}