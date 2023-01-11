#include <stdio.h>
int main() {
	long long a,n,i,j;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		long long m[n];
		for (j=0;j<n;j++)
		{
			scanf("%lld",&m[j]);
		}
		for (j=0;j<n;j++)
		{
			if (m[j]%2==0) printf("%lld ",m[j]);
		}
		printf("\n");
	}
}


