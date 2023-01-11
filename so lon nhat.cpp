#include <stdio.h>
int main() {
	int a,n,m[100];
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d",&n);
		for (int i=0;i<n;i++)
		{
			scanf("%d",&m[i]);
		}
		int max=m[0];
		for (int i=0;i<n;i++)
		{
			if (max<=m[i]) max=m[i];
		}
		printf("%d\n",max);
		for (int i=0;i<n;i++)
		{
			if (m[i]==max) printf("%d ",i);
		}
		printf("\n");
	}
}
