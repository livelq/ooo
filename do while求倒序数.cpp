#include<stdio.h>
int main()
{
	int x,a;
	printf("请输入一个整数：");
	scanf("%d",&x);
	do
	{
		a=x%10;
		printf("%d",a);
		x=x/10;
	}while(x!=0);
 } 
