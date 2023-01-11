#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
    int n,M[100];
	int i=0,a;
	i=a;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&M[i]);
	}
	int dem=0;
	for (i=0;i<n;i++)
	{   
		int uoc=0;
		int j;
		for (j=1;j<=M[i];j++)
		{
			if (M[i]%j==0)
			uoc++;
		}
		if (uoc==2)
		{
			dem++;
		}	
	}
	printf("%d ",dem);
	for (i=0;i<n;i++)
	{
		if (ktsnt(M[i])) printf("%d ",M[i]);
	}
}
int ktsnt(int n)
{	
	int i;
	if (n<2) return 0;
	for (i=2;i<=sqrt(n);i++)	if (n%i==0) return 0;
	return 1;
}
