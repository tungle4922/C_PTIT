#include <stdio.h>
int main() {
	int a,m,n,p,mangtn[100],mangth[100];
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d%d%d",&m,&n,&p);
		for (int j=0;j<m;j++)
		{
			scanf("%d",&mangtn[j]);
		}
		for (int f=0;f<n;f++)
		{
			scanf("%d",&mangth[f]);
		}
		printf("Test %d:\n",i);
		for (int j=0;j<p;j++)
		{
			printf("%d ",mangtn[j]);
		}
		for (int f=0;f<n;f++)
		{
			printf("%d ",mangth[f]);
		}
		for (int j=p;j<m;j++)
		{
			printf("%d ",mangtn[j]);
		}
		printf("\n");
	}
}
