#include<stdio.h>
int main()
{
	int x,g,sh,b,flag;
	printf("水仙花数是：");
	for(x=100;100<=x<999;x++)
	{
		g=x%10;
		sh=x/10%10;
		b=x/100;
		if(x==g*g*g+sh*sh*sh+b*b*b)
			printf("%-5d",x);
	}
}
