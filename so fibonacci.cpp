#include <stdio.h>
int main() {
	long long a;
	scanf("%lld",&a);
	for (int i=1;i<=a;i++)
	{
		long long m[200];
		m[0]=0;
		m[1]=1;
		for (int i=2;i<100;i++)
		{
			m[i]=m[i-1]+m[i-2];
		}
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",m[n]);
	}
}
