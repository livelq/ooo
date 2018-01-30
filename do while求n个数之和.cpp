#include<stdio.h>
int main()
{
	int i,n,x,sum;
	sum=0;
	i=1;
	printf("请输入数：");
	scanf("%d",&n);        /*这个n的意思是n个数相加，就是要输入n个数*/ 
	do
	{
		scanf("%d",&x); /*x才是要加得数*/ 
		sum=sum+x;
		i++;
	}while(i<=n);
	printf("sum=%d",sum);
	
}
