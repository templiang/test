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
	char ch[row][col]={0};//��������
	//��ʼ������
	inigame(ch,row,col);
	//��ӡ����
	display(ch,row,col);
}
int main()
{
	int imput=0;
	test();
	do
	{
		printf("��������ֵѡ���Ƿ�ʼ��Ϸ");
	    scanf("%d",&imput);
		switch(imput)
		{
		        case 1:
				printf("��Ϸ��ʼ\n");
				break;
				case 0:
				printf("�˳���Ϸ\n");
				break;
				default:
				printf("�����������������\n");
				break;
		}
		if(imput==1)
			game();
	}while(imput);
	return 0;
}