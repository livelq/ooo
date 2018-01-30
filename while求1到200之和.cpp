#include<stdio.h>
int main()
{
	int i,sum;
	i=1;
	sum=0;
	while(i<=200)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("%d",sum);
 } 
