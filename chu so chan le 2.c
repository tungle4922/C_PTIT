#include <stdio.h>
int main() {
	long long a,n,deml,demc,b,i;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		deml=0;
		demc=0;
		while (n>0)
		{	
			b=n%10;
			if (b%2==1) deml++;
			else demc++;
			n=n/10;
		}
	printf("%lld %lld\n",deml,demc);	
	}
}
