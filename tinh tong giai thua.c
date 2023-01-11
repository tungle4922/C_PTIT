#include <stdio.h>
int main() {
	long long n,i;
	long long tong=0;
	long long a=1;
	scanf("%lld",&n);
	for (i=1;i<=n;i++)
	{
		a=a*i;
		tong=tong+a;
	}
	printf("%lld",tong);
	return 0;
}
