#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu(){
	printf("*******************************\n");
	printf("*******   1 开始游戏    *******\n");
	printf("*******   0 结束游戏    *******\n");
	printf("*******************************\n");
}
void game()
{
	//1 首先要生成一个1-100内的随机数
	int gusse_num = rand() % 100 - 1;
	while (1){
	//2 用户进行猜测
	printf("请猜测一个数字；\n");
	int gusse = 0;
	scanf("%d", &gusse);
	//3 对猜测数字进行比较
	// 猜大了
	
		if (gusse > gusse_num)
		{
			printf("猜大了\n");
		}
		//猜小了
		if (gusse < gusse_num)
		{
			printf("猜小了\n");
		}
		//猜对了
		if (gusse == gusse_num)
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	
	//rand函数调用的条件
	srand((unsigned)time(NULL));
	//这是一个猜数字的游戏
	//1.首先，有一个菜单进行选择
	menu();
	//2.用户进行选择

	printf("请选择；\n");
	while (1){
		int choose = 0;
		scanf("%d", &choose);
		//   选择1 开始游戏
		if (choose == 1)
		{
			//开始游戏
			game();
			menu();
		}
		//结束游戏
		else if (choose == 0)
		{
			printf("结束游戏\n");
			break;
		}
		//输入错误
		else
		{
			printf("输入错误，请重新输入；\n");
		}
	}
	system("pause");	
	return 0;
}