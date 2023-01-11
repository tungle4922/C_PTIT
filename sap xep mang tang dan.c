#include <stdio.h>
int main() {
	int n,t,j;
	scanf("%d",&n);
	int i,M[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&M[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (M[i]>M[j])
			{
				t=M[i];
				M[i]=M[j];
				M[j]=t;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",M[i]);
	}
}
