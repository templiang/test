#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void test()
{
	printf("*********************\n");
	printf("***1.play 0.exit ****\n");
	printf("*********************\n");
}
void game()
{
	char ch[row][col]={0};//定义棋盘
	//初始化棋盘
	inigame(ch,row,col);
	//打印棋盘
	display(ch,row,col);
}
int main()
{
	int imput=0;
	test();
	do
	{
		printf("请输入数值选择是否开始游戏");
	    scanf("%d",&imput);
		switch(imput)
		{
		        case 1:
				printf("游戏开始\n");
				break;
				case 0:
				printf("退出游戏\n");
				break;
				default:
				printf("输入错误，请重新输入\n");
				break;
		}
		if(imput==1)
			game();
	}while(imput);
	return 0;
}