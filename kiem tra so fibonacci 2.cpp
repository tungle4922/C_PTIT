#include<stdio.h>
int max=100;
int main() {
	int t;
	long long n,m[max];
	m[0]=0;m[1]=1,m[2]=1;
	for (long long i=3;i<max;i++) m[i]=m[i-1]+m[i-2];
	scanf("%d",&t);
	for (int i=1;i<=t;i++)
	{
		int dem=0;
		scanf("%lld",&n);
		for (int i=0;i<max;i++)
		{
			if (m[i]==n) 
			{
				dem++;
			}
		}
		if (dem==0) printf("NO\n");
		if (dem>=1) printf("YES\n");
	}
}
