#include <stdio.h>
int main() {
	long long t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		long long j=2;
		while (n>1)
		{
			if (n%j==0)
			{
				printf("%lld",j);
				if (n>j) printf("x");
				n=n/j;
			}
			if (n%j!=0) j++;
		}
	}
}
