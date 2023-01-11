#include <stdio.h>
int main() {
	int n,m[100],k=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for (int i=0;i<n;i++)
	{
		printf("Buoc %d: ",i);
		for (int j=0;j<=i;j++)
		{
			if (m[i]<m[j])
			{
				int t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
		}
		for (int j=0;j<=i;j++)
		{
			printf("%d ",m[j]);
		}
		printf("\n");
	}
}
