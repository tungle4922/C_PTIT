#include <stdio.h>
int main() {
	int n,m[100],min;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for (int i=0;i<n-1;i++)
	{
		min=i;
		for (int j=i+1;j<n;j++)
		{
			if (m[min]>m[j]) min=j;
		}
		int t=m[i];
		m[i]=m[min];
		m[min]=t;
		for (int j=0;j<n;j++)
		{
			printf("%d ",m[j]);
		}
		printf("\n");
	}
}
