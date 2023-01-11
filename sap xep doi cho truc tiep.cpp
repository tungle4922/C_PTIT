#include <stdio.h>
int main() {
	int n,m[100],k=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for (int i=0;i<n-1;i++)
	{
		printf("Buoc %d: ",i+1);
		for (int j=i+1;j<n;j++)
		{
			if (m[i]>m[j])
			{
				int t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
		}
		for (int j=0;j<n;j++)
		{
			printf("%d ",m[j]);
		}
		printf("\n");
	}
}
