#include<stdio.h>
int main()
{
	int x,i=2,min;     /*Ҫ�Լ�������ٸ�����ʱ������Ҫ��һ������,�������i���ϸ�n*/ 
	printf("������:");
	scanf("%d",&x);
	min=x;
	while(i<=100)     /*ͨ���������Ҫ�Ǳ��õ����ⲽ���У����ĳ�ʼֵ��Ϊ2��Ҫ�ǲ��þ�Ϊ1*/ 
	{
		scanf("%d",&x);
		if(x<min)
			min=x;
			i++; 
	 } 
	printf("min=%d",min);
 } 
