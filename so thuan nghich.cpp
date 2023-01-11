#include <stdio.h>
int main() {
	long long a,n,m,b;
	scanf("%lld",&a);
	for (int i=1;i<=a;i++)
	{	
		m=0;
		scanf("%lld",&n);
		b=n;
		while (n>0)
		{	
			m=m*10+n%10;
			n=n/10;
		}
		if (m==b) printf("YES\n");
		else printf("NO\n");
	}
}
