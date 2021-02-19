#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void swap(char* p,char* q,int n);

void my_bubblesort(void* base,int len,int wid,int (*cmp)(void* e1,void* e2));
