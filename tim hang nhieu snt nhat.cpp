#include <stdio.h>
#include <math.h>
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
int main()
{
	int n;
	int m[30][30];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			scanf("%d",&m[i][j]);
		printf("\n");
	}
	int max=0;
	for (int i=0;i<n;i++)
	{
		int dem=0;
		for (int j=0;j<n;j++)
		{
			if(snt(m[i][j])) dem++;
		}
		if (max<dem) max=dem;
	}
	/*printf("%d",max);*/
	int k;
	for (int i=0;i<n;i++)
	{
		int dem=0;
		for (int j=0;j<n;j++)
		{
			if(snt(m[i][j])) dem++;
		}
		if (max==dem) 
		{	
			k=i+1;
			printf("%d\n",k);
			break;
		}
	}
	for (int i=0;i<n;i++)
	{
		if (i==k-1)
		{
			for (int j=0;j<n;j++)
			{
				if(snt(m[i][j])) printf("%d ",m[i][j]);
			}
		}
	}
}
