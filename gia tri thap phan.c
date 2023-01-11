#include <stdio.h>
int main() {
	long long a,n,i;
	scanf("%lld",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		printf("%.15lf\n",1/(double)n);
	}
}
