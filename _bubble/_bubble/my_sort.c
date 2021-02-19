#define _CRT_SECURE_NO_WARNINGS 1
#include"my_sort.h"
int cmp_int(void* e1,void* e2)
{
	return (*((int*)e1)-*((int*)e2));
}
void swap(char* p,char* q,int n)
{
	int i=0;
	for(i=0;i<n;++i)
	{
		char temp=*p;
		*p=*q;
		*q=temp;
		p++,q++;
	}
}

void my_bubblesort(void* base,int len,int wid,int (*cmp)(void* e1,void* e2))
{
	int i,j;
	for(i=0;i<len;++i)//冒泡趟数
	{
		//每趟比较次数
		for(j=0;j<len-1-i;++j)
		{
			if(cmp((char*)base+j*wid,(char*)base+(j+1)*wid)>0)//比较大小
			{
				swap((char*)base+j*wid,(char*)base+(j+1)*wid,wid);//交换
			}		
		}
	}
}
////int main()
////{
////	int i=0;
////	int arr[10]={1,2,3,4,5,6,2,5,8,10};
////	int s=sizeof(arr)/sizeof(arr[0]);
////	int w=sizeof(arr[0]);
////	my_bubblesort(arr,s,w,cmp_int);
////	for(i=0;i<10;i++)
////	{
////		printf("%d ",arr[i]);
////	}
////	return 0;
//}测试用代码
