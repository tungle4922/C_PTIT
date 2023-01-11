#include<stdio.h>
long long a[100000];
int dem(long long x,long long n) 
{
 	int dem=0;
 	for(int i=0;i<n;i++)
  	{
  		if(a[i]==x) dem++;
  		if(dem==2) break;
	}
 	return dem;
}
int main() {
	long long t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for (int i=0;i<n;i++) scanf("%lld",&a[i]);
		int b,dem1=0;
		for (int i=0;i<n;i++)
		{
			if (dem(a[i],n)>1) 
			{
				dem1++;
				b=i;
				break;
			}
		}
		if(dem1==0) printf("NO\n");
		else printf("%lld\n",a[b]);
	}
}
