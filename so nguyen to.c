#include <stdio.h>
#include <math.h>
int main() {
	long long a,n,i,j;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{	
		int b=1;
		scanf("%lld",&n);
		for(j=2;j<=sqrt(n);j++)
		{
			if (n%j==0) b=0;
		} 
		if (b==0) printf("NO\n");
		else printf("YES\n");
	}
}
