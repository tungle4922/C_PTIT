#include <stdio.h>;
int main() {
	long long a,n,i,sum;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		sum=0;
		scanf("%lld",&n);
		sum=n*(n+1)/2;
		printf("%lld\n",sum);
	}
}
