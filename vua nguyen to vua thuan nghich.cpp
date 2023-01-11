#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if (n<=1) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if (n%i==0) return 0;
	return 1;
}
int sothuannghich(int n)
{
	int sum=0;
	while (n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	return sum;
}
int main() {
	long long c,a,b;
	scanf("%lld",&c);
	for (int i=1;i<=c;i++)
	{
		scanf("%lld %lld",&a,&b);
		int dem=0;
		for (int j=a;j<=b;j++)
		{
			if (snt(j) && sothuannghich(j)==j) 
			{
				printf("%lld ",j);
				dem++;
			}
			if (dem>=10) 
			{
				printf("\n");
				dem=0;
			}
		}
		printf("\n\n");
	}
}
