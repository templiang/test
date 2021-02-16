#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void inigame(char ch[row][col],int ROW,int COL)
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
			ch[i][j]=' ';
	
	}
}
void display(char ch[row][col],int ROW,int COL)
{
	int i=0,j=0;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			printf(" %c ",ch[i][j]);
		    if(j<col-1)
            printf("|");
		}
	    printf("\n");
		if(i<row-1)
		{
			for(j=0;j<col;++j)
	        {
		        printf("---");
		        if(j<col-1)
			    printf("|");
	        }

		}
        printf("\n");
	}

}