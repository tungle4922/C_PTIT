#include <stdio.h>
int m[100],n;
int dem(int a)
{
	int dem=0;
	for (int i=0;i<n;i++)
		if (m[i]==a) dem++;
	return dem;
}
int ktm(int t,int b[100],int d)
{
	for (int i=0;i<d;i++)
		if (b[i]==t) return 0;
	return 1;
}
int main() {
	int a;
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d",&n);
		for (int j=0;j<n;j++) scanf("%d",&m[j]);
		int b[100],d=0;
		for (int j=0;j<n;j++)
		{
			if (ktm(m[j],b,d)) b[d++]=m[j];
		}
		int max=dem(b[0]);
		for (int j=0;j<d;j++)
		{
			if (max<dem(b[j])) max=dem(b[j]);
		}
		for (int j=0;j<d;j++)
		{
			if (max==dem(b[j])) printf("%d ",b[j]);
		}
		printf("\n");
	}
}
