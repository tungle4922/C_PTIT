#include <stdio.h>;
void tongcs(int n);
int main() {
	long long a,n,i,sum;
	scanf("%lld",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		tongcs(n);
	}
}
void tongcs(int n)
{
	int sum;
	sum=0;
	while (n>0)
		{
			sum=sum+n%10;
			n=n/10;
		}
	if (sum%10==0) printf("YES");
	else printf("NO");	
}
