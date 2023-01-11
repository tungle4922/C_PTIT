#include <stdio.h>
int main() {
	long long a,n,b,c,i;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		b=n%10;
		while (n>0)
		{
			c=n%10;
			n=n/10;
		}
		if (b==c) printf("YES\n");
		else printf("NO\n");
	}
}
