#include<stdio.h>
int main()
{
	int x,i,min;
	printf("������һ������");
	scanf("%d",&x);
	min=x;
	for(i=2;i<=100;i++)        /*������ʼֵ���������������ı�ѭ��������*/ 
		{
			scanf("%d",&x);  /*һ��Ҫ����ö���ʱ��ѭ���ж�Ҫ��scanf*/ 
			if(x<min)
				min=x;
		}
	printf("min=%d",min);
	
 } 
