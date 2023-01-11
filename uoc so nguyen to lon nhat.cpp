#include <stdio.h>   
#include <math.h>
int snt(long long n)
{
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main() {
	long long a,n;
	scanf("%lld",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		if (snt(n)) printf("%lld\n",n);
		else
		{
			for(int j=2;j<=sqrt(n);j++)
			{
				if (n%j==0)
					n/=j;
			}
			printf("%lld\n",n);
	    }
	}
}
