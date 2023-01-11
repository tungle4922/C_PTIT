#include <stdio.h>
#include <math.h>
long long m[1000];
int dem(int n)
{
	int dem=0;
	for (int i=0;i<1000;i++)
		if (m[i]==n) dem++;
	return dem;
}
int ktm(int t,int b[100],int d)
{
	for (int i=0;i<d;i++)
	 	if (t==b[i]) return 0;
	return 1;
}
int main() {
	long long a,n;
	scanf("%lld",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%lld",&n);
		if (n%2==1) printf("0\n");
		else if(n==2) printf("1\n");
		else
		{
			int demtn=0,k=0;
			int b[100],d=0;
			for(int j=2;j<=sqrt(n);j++)
				{
					while (n%j==0)
					{
						m[k++]=j;
						demtn++;
						n/=j;
					}
				}
			if(n==1)
			{
				for (int k=0;k<demtn;k++)
				{
					if(ktm(m[k],b,d)) b[d++]=m[k];
				}
				int uoc=1;
				for (int k=0;k<d;k++) uoc=uoc*(dem(b[k])+1);
				int uocl=1;
				for (int k=0;k<d;k++)
					if (b[k]&1) uocl=uocl*(dem(b[k])+1);
				printf("%d\n",uoc-uocl); 
			} 
			if(n>1)
			{
				for (int k=0;k<demtn;k++)
				{
					if(ktm(m[k],b,d)) b[d++]=m[k];
				}
				int uoc=2;
				for (int k=0;k<d;k++) uoc=uoc*(dem(b[k])+1);
				int uocl=2;
				for (int k=0;k<d;k++)
					if (b[k]&1) uocl=uocl*(dem(b[k])+1);
				printf("%d\n",uoc-uocl); 
			} 
		}
	}
}
