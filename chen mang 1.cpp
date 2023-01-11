#include <stdio.h>
int main() {
	int a,b,c,m[100],n[100],i,j;
	scanf("%d%d",&a,&b);
	for (i=0;i<a;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("\n");
	for (j=0;j<b;j++)
	{
		scanf("%d",&n[j]);
	}
	scanf("%d",&c);
	for (i=0;i<c;i++)
	{
		printf("%d ",m[i]);
	}
	for (j=0;j<b;j++)
	{
		printf("%d ",n[j]);
	}
	for (i=c;i<a;i++)
	{
		printf("%d ",m[i]);
	}
}
