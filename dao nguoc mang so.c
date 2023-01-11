#include <stdio.h>
int main() {
	long long n,i,j;
		scanf("%lld",&n);
		long long m[n];
		for (i=0;i<n;i++)
		{
			scanf("%lld",&m[i]);
		}
		for (i=n-1;i>=0;i--)
		{
			printf("%lld ",m[i]);
		}
}



