#include <stdio.h>
int main() {
	long long m[200];
 	m[0]=0;
	m[1]=1;
	for (int i=2;i<70;i++)
	{
		m[i]=m[i-1]+m[i-2];
	}
	long long n,k=0;
	scanf("%lld",&n);
	for (int i=0;i<=n+1;i++)
	{
		if (n==m[i]) 
		{	
			k++;		
			printf("1");
			return 0;
		}
	}
	if (k==0) printf("0");
}
