#include<stdio.h>
int main()
{
	int x,a;
	printf("������һ��������");
	scanf("%d",&x);
	do
	{
		a=x%10;
		printf("%d",a);
		x=x/10;
	}while(x!=0);
 } 
