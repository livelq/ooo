#include<stdio.h>
int main()
{
	float n,sum=0;
	printf("������һ����:");
	scanf("%f",&n);
	do
	{
		sum=sum+n;
		scanf("%f",&n); 
	}while(n>0);
	printf("sum=%f",sum);
}
