#include<stdio.h>
int main()
{
	int x,i=2,min;     /*要自己输入多少个数字时，常常要多一个变量,比如这个i和上个n*/ 
	printf("请输入:");
	scanf("%d",&x);
	min=x;
	while(i<=100)     /*通常这个变量要是被用到解题步骤中，他的初始值就为2，要是不用就为1*/ 
	{
		scanf("%d",&x);
		if(x<min)
			min=x;
			i++; 
	 } 
	printf("min=%d",min);
 } 
