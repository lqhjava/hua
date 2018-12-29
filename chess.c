#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//这是一个三子棋的游戏
//1.用户选择游戏或者退出
//2.用户选择电脑先还是人先
//3.开始落子
//4.判断输赢
#define ROW  3
#define COL  3
char arr[ROW][COL];

void menu()
{
	printf("**************************\n");
	printf("*******1   开始游戏*******\n");
	printf("*******0   退出游戏*******\n");
	printf("**************************\n");
}
void choose()
{
	printf("**************************\n");
	printf("*******1   人类先 ********\n");
	printf("*******0   电脑先 ********\n");
	printf("**************************\n");
}
void Init(char arr[ROW][COL])
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			arr[row][col] = ' ';
		}
		
	}
}
void Print(char arr[ROW][COL])
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			printf("|%c ", arr[row][col]);
		}
		printf("\n");
		printf(" -- -- --\n");
	}
}
int isfull()
{
	int count = 0;
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			if (arr[row][col] == ' ')
			{
				return 0;
			}
		}

	}
	return 1;
}
int win()
{
	//判断行
	for (int row = 0; row < ROW; row++)
	{
		if (arr[row][0] == arr[row][1] && arr[row][1] == arr[row][2] && arr[row][0] != ' ')
		{
			return arr[row][0];
		}
	}
	//判断列
	for (int col = 0; col < COL; col++)
	{
		if (arr[0][col] == arr[1][col] && arr[1][col] == arr[2][col] && arr[0][col] != ' ')
		{
			return arr[0][col];
		}
	}
	//判断对角线
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[2][2] != ' ')
	{
		return arr[0][0];
	}
	if (arr[2][0] == arr[1][1] && arr[2][0] == arr[0][2] && arr[2][0] != ' ')
	{
		return arr[2][0];
	}
	return ' ';
}
int winner()
{
	if (win() == 'X')
	{
		printf("你赢了！\n");

		return 1;
	}
	if (win() == 'O')
	{
		printf("电脑赢了！\n");

		return 1;
	}
	if (isfull() == 1)
	{
		printf("和棋！\n");

		return 1;
	}
	return 0;
}
void playermove()
{
	int row;
	int col;
	while (1){
		printf("请输入一坐标：");
		scanf("%d %d", &row, &col);
		if (row > 2 || col > 2)
		{
			printf("坐标输入错误，");
			continue;
		}
		if (arr[row][col] == ' ')
		{

			arr[row][col] = 'X';
			break;
		}
		else
		{
			
			printf("已经有子，落子无效，重新落子\n");
			continue;

		}
	}
}
void computermove()
{
	
	while (1){
		int row = rand() % 3;
		int col = rand() % 3;
		if (winner() == 1)
		{
			break;
		}
		
		if (arr[row][col] == ' ')
		{
			printf("电脑落子\n");
			arr[row][col] = 'O';
			break;
		}
		else
		{
			continue;
		}
	}
}


void game()
{
	//1.用户选择人先还是电脑先
	int ch;
	choose();
	printf("请选择：");
	scanf("%d",&ch);
	if (ch == 1)
	{
		Init(arr);
		Print(arr);
		while (1){
			
			playermove();
			Print(arr);
			if (winner() == 1)
			{
				break;
			}
			
			winner();
			computermove();
			
			Print(arr);
			if (winner() == 1)
			{
				break;
			}
			winner();
			
		}
		
	}
	
	else if (ch == 0)
	{
		Init(arr);
		while (1){
			
			computermove();
			Print(arr);
			if (winner() == 1)
			{
				break;
			}
			
			winner();
			playermove();
			Print(arr);
			if (winner() == 1)
			{
				break;
			}
			
			winner();
			
		}
	}

}
int main()
{
	srand((unsigned int)time(0));
	//1菜单
	menu();
	while (1)
	{
	int choose;
	printf("请选择：\n");
	scanf("%d",&choose);
	if (choose == 0)
	{
		break;
	}
		game();
		menu();
	}
	
	
		printf("结束游戏\n");
	
	
	system("pause");	
	return 0;
}