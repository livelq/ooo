#include<stdio.h>
int main()
{
	int i,n,x,sum;
	sum=0;
	i=1;
	printf("����������");
	scanf("%d",&n);        /*���n����˼��n������ӣ�����Ҫ����n����*/ 
	do
	{
		scanf("%d",&x); /*x����Ҫ�ӵ���*/ 
		sum=sum+x;
		i++;
	}while(i<=n);
	printf("sum=%d",sum);
	
}
