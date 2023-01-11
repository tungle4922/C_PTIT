#include<stdio.h>
int main() {
	long long t,m[100][100],n[100][100],a,b;
	scanf("%lld",&t);
	for (int l=1;l<=t;l++)
	{
		scanf("%lld%lld",&a,&b);
		for (int i=0;i<a;i++)
		{
			for (int j=0;j<b;j++) 
			{
				scanf("%lld",&m[i][j]);
			}
			printf("\n");
		}
		printf("Test %d:\n",l);
		for (int i=0;i<a;i++)
		{
			for (int j=0;j<b;j++) 
			{
				n[j][i]=m[i][j];
			}
		}
		for (int i=0;i<a;i++)
		{
			for (int j=0;j<a;j++) 
			{	
				int sum=0;
				for (int k=0;k<b;k++)
				{
					sum+=m[i][k]*n[k][j];
				}
				printf("%d ",sum);
			}
			printf("\n");
		}
	}
}
