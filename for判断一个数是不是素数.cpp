#include<stdio.h>
int main()
{
	int x,i,flag;
	printf("请输入一个数：");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	if(x/i==0) 
	{	flag=0;
		break;
	}
	if(flag=0)
		printf("%d不是素数",x);
	else
		printf("%d是素数",x);
}
