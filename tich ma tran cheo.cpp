#include<stdio.h>
int main() {
	int t,m[100][100],n[100][100],a;
	scanf("%d",&t);
	for (int l=1;l<=t;l++)
	{
		scanf("%d",&a);
		for (int i=0;i<a;i++)
		{	
			int d=1;
			for (int j=0;j<a;j++) 
			{
				if (j<=i) m[i][j]=d++;
			}
		}
		printf("Test %d:\n",l);
		for (int i=0;i<a;i++)
		{	
			for (int j=0;j<a;j++) 
			{
				n[j][i]=m[i][j];
			}
		}
		for (int i=0;i<a;i++)
		{	
			for (int j=0;j<a;j++) 
			{
				int sum=0;
				for (int k=0;k<a;k++)
				{
					sum+=m[i][k]*n[k][j];
				}
				printf("%d ",sum);
			}
			printf("\n");
		}
	}
}
