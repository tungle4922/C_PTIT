#include <stdio.h>
int main() {
	int a,b[100],c[100],n;
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d",&n);
		for (int j=0;j<n;j++) scanf("%d",&b[j]);
		for (int j=0;j<n;j++) scanf("%d",&c[j]);
		int k=0,f=0;
		for (int j=0;j<n-1;j++)
		{
			for (int k=j+1;k<n;k++)
			{
				if (b[j]>b[k])
				{
					int t=b[j];
					b[j]=b[k];
					b[k]=t;
				}
			}
		}
		for (int j=0;j<n-1;j++)
		{
			for (int k=j+1;k<n;k++)
			{
				if (c[j]<c[k])
				{
					int t=c[j];
					c[j]=c[k];
					c[k]=t;
				}
			}
		}
		printf("Test %d:\n",i);
		for (int j=0;j<2*n;j++)
		{
			if (j%2==0) printf("%d ",b[k++]);
			else printf("%d ",c[f++]);
		}
		printf("\n");
	}
}
