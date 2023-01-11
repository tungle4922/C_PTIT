#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
int tonguocso(int a)
{
	long long sum=0;
	bool kt[a+1];
	for(int i=2;i<=a;i++) kt[i]=true;
	int b=a;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(kt[i]==true) 
		{ 
			for(int j=i*i;j<=a;j+=i) kt[j]=false;
		}
	}
	for(int i=2;i<=a/2;i++)
	{
		while(kt[i]==true && b%i==0)
		{
			sum+=i;
			b/=i;
		}
		if(b==1) break;
	}
	return sum;
}
int main() {
	int n;
	long long sum=0;
	scanf("%d",&n);
	int m[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		if(snt(m[i])) sum+=m[i];
		else sum+=tonguocso(m[i]);
	}
	printf("%lld",sum);
}
