#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long a[n];
		for(int i=0;i<n;i++) scanf("%lld",&a[i]);
		long long max=0;
		int b;
		for(int i=0;i<n;i++) 
		{
			if(a[i]>0)
			{
				b=i;
				break;
			}
		}
		int c;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]>0)
			{
				c=i;
				break;
			}
		}
		for(int i=b;i<=c;i++)
		{	
			if(a[i]>0 && i==b || a[i]>0 && a[i-1]<0) 
			{
				long long sum=0;
				for(int j=i;j<=c;j++)
				{
					sum+=a[j];
					if(sum>max) max=sum;
				}
			}
		}
		printf("%lld\n",max);
	}
}
