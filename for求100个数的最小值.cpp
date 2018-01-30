#include<stdio.h>
int main()
{
	int x,i,min;
	printf("请输入一个数：");
	scanf("%d",&x);
	min=x;
	for(i=2;i<=100;i++)        /*变量初始值；结束的条件；改变循环的条件*/ 
		{
			scanf("%d",&x);  /*一般要输入好多数时，循环中都要有scanf*/ 
			if(x<min)
				min=x;
		}
	printf("min=%d",min);
	
 } 
