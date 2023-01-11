#include <stdio.h>
#include <math.h>
int n,m[10];
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++) if (a%i==0) return 0;
	return 1;
}
int ktm(int a,int b[100],int d)
{
	for (int i=0;i<d;i++)
	{
		if (a==b[i]) return 0;
	}
	return 1;
}
int demtn(int a)
{
	int demtn=0;
	for (int i=0;i<10;i++)
		if (m[i]==a) demtn++;
	return demtn;
}
int main() {
	int dem=0,a;
	scanf("%d",&n);
	a=n;
	while (n>0)
	{
		dem++;
		n/=10;
	}
	for (int i=dem-1;i>=0;i--)
	{
		m[i]=a%10;
		a/=10;
		
	}
	int d=0,b[100];
	for (int i=0;i<dem;i++)
	{
		if (snt(m[i]) && ktm(m[i],b,d))
		{
			b[d++]=m[i];
		}
	}
	for (int i=0;i<d;i++)
	{
		printf("%d %d\n",b[i],demtn(b[i]));
	}
}
