#include <stdio.h>
#include <math.h>
int main() {
	long long a,n,i;
	int b;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		b=sqrt(n);
		if (n==b*b) printf("YES\n");
		else printf("NO\n");
	}
}
