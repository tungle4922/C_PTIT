#include <stdio.h>
int main() {
	long long a,n,i,j,m[20],dem,f;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		j=0;
		dem=0;
		while (j>=0 && n>0)
		{
			m[j]=n%10;
			n=n/10;
			dem++;
			j++;
		}
		for (f=0;f<dem;f++)
		{
			if (m[f]>=m[f+1]) printf("YES\n");
		else printf("NO\n");
		}
	}
}
