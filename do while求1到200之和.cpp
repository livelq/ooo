#include<stdio.h>
int main()
{
	int i,sum;
	i=1;
	sum=0;
	do
	{
		sum=sum+i;
		i=i+1;
	}while(i<=200);
	printf("%d",sum);
}
