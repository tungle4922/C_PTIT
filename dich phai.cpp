#include <stdio.h>
int main() {
	int n,a,i,m[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	scanf("%d",&a);
	for (i=n-a;i<n;i++)
	{
		printf("%d ",m[i]);
	}
	for (i=0;i<n-a;i++)
	{
		printf("%d ",m[i]);
	}
}
