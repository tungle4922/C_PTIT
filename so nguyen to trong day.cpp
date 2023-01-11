#include <stdio.h>
#include <math.h>
int ktsnt(int n);
int main() {
	long long a,n,i,m[100];
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{	
		int j;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&m[j]);
		}
		for(j=0;j<n;j++)
		{
			if (ktsnt(m[j])) printf("%lld ",m[j]);
		}
		printf("\n");
	}
}
int ktsnt(int n)
{
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if (n%i==0) return 0;
	return 1;
}
