#include <stdio.h>
int main() {
	long long a,n;
	scanf("%lld",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		int j=2;
		while(n>1)
		{
			if (n%j==0)
			{
				n=n/j;
				printf("%lld ",j);
			}
			if (n%j!=0) j++;
		}
		printf("\n");
	}
}
