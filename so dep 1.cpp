#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if (n<=1) return 0;
	for (int i=2;i<=sqrt(n);i++) 
		if (n%i==0) return 0;
		return 1;
}
int ktfib(int n)
{
	long long m[200];
 	m[0]=0;
	m[1]=1;
	for (int i=2;i<70;i++)
	{
		m[i]=m[i-1]+m[i-2];
	}
	long long k=0;
	for (int i=0;i<=n+1;i++)
	{
		if (n==m[i]) 
		{	
			k++;		
			return 1;
		}
	}
	if (k==0) return 0;
}
int tongcs(int n)
{
	int sum=0;
	while (n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	if (ktfib(sum)) return 1;
	return 0;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if (a>b) 
	{
		while (b<=a)
		{	
			if (snt(b) && tongcs(b)) printf("%d ",b);
			b++;
		}
    } 
	if (b>a) 
	{
		while (a<=b)
		{
			if (snt(a) && tongcs(a)) printf("%d ",a);
			a++;
		}
	}
}
