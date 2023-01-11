#include <stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<2*n-1;j++)
		{
			if ((i==n-1 && j<=n-1) || (i==0 && j>=n-1) || (i==n-1-j) || (i==2*n-1-j-1) || (j>n-1-i && j<2*n-1-i))
			{
				printf("*");
			}
			else if ((j==0 && i<=n-2) || (i==0 && j<=n-2) || (i==n-2-j) || (j>0 && j<n-2-i))
			printf("~");
			else printf(" ");
		}
		printf("\n");
	}
}
