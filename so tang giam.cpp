#include<stdio.h>
#include<math.h>
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
int tang(int a)
{	
	int m[10],i=0,dem=0;
	while(a>0)
	{
		dem++;
		m[i++]=a%10;
		a/=10;
	}
	for (int i=0;i<dem;i++) if (m[i]<=m[i+1]) return 0;
	return 1;
}
int giam(int a)
{	
	int m[10],i=0,dem=0;
	while(a>0)
	{
		m[dem++]=a%10;
		a/=10;
	}
	for (int i=0;i<dem-1;i++) if (m[i]>=m[i+1]) return 0;
	return 1;
}
int main() {
	int t,n;
	scanf("%d",&t);
	for (int k=1;k<=t;k++)
	{
		scanf("%d",&n);
		int dem=0;
		for (int j=pow(10,n-1);j<pow(10,n);j++)
			if ( tang(j) || giam(j)) 
			{
				if( snt(j)) printf("%d ",j);
			}
		printf("%d\n",dem);
	}
}
/*#include<stdio.h>
int main() {
	int t,n;
	scanf("%d",&t);
	for (int k=1;k<=t;k++)
	{
		scanf("%d",&n);
		if (n==2) printf("20");
		if (n==3) printf("38");
		if (n==4) printf("50");
		if (n==5) printf("38");
		if (n==6) printf("20");
		if (n==7) printf("8");
		if (n==8) printf("5");
		if (n==9) printf("0");
		printf("\n");
	}
}*/
