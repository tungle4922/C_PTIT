#include <stdio.h>
#include <math.h>
int main() {
	long long m,n,i,dem;
	scanf("%lld %lld",&m,&n);
	dem=0;
	for (int i=sqrt(m)+1;i<=sqrt(n);i++)
	{
		dem++;
	}
	printf("%lld\n",dem);
	for (int i=sqrt(m)+1;i<=sqrt(n);i++)
	{
		printf("%lld\n",i*i);
	}
}

