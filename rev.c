#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Reverse(int a[],int j)
{
	int i=0,temp=0;
	for(;i<j;++i,--j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

}
int main()
{
	int i=0;
	int length=0;
	length=(sizeof(arr)/sizeof(arr[0])-1);
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;++i)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	Reverse(arr,length);
	for(i=0;i<10;++i)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}