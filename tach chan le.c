#include <stdio.h>
int main() {
	long long n,i,j;
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
		for (j=0;j<n;j++)
		{
			if (m[j]%2==1) printf("%lld ",m[j]);
		}
		printf("\n");
}



