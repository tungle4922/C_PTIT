#include <stdio.h>
int ktm(int t,int b[100],int d)
{
	for (int i=0;i<d;i++)
		if (t==b[i]) return 0;
	return 1;
}
int main() {
	int n,m[100],b[100],d=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for (int i=0;i<n;i++)
	{
		if (ktm(m[i],b,d)) b[d++]=m[i];
	}
	for (int i=0;i<d;i++) printf("%d ",b[i]);
}
