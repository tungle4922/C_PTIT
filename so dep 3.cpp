#include <stdio.h>
int sothuanngich(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	return sum;
}
int cssau(int n)
{
	while(n>0)
	{
		if(n%10==6) return 1;
		n/=10;
	}
	return 0;
}
int tongcs(int n)
{
	int sum=0;
	while (n>0)
	{
		sum=sum+n%10;
		n/=10;
	}
	return sum;
}
int main() {
	long long a,b,dem=0;
	scanf("%lld %lld",&a,&b);
	if (a<b)
	{
		for (int i=a;i<=b;i++)
		{
			if (sothuanngich(i)==i && cssau(i) && tongcs(i)%10==8) 
				printf("%lld ",i);
		}
	}
	if (a>b)
	{
		for (int i=b;i<=a;i++)
		{
			if (sothuanngich(i)==i && cssau(i) && tongcs(i)%10==8) 
				printf("%lld ",i);
		}
	}
}
