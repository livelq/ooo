#include<stdio.h>
int main()
{
	float x,sum=0;
	printf("请输入第一个数：");
	scanf("%f",&x);
	while(x>0)
	{
		sum=sum+x;
		scanf("%f",&x);
	 } 
	 printf("sum=%f",sum);
 } 
