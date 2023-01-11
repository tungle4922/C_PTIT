#include <stdio.h>;
int main() {
	long long a,n,i,sum;
	scanf("%lld",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		sum=0;
		while (n>0)
		{
			sum=sum+n%10;
			n=n/10;
		}
		printf("%lld\n",sum);
	}
}
