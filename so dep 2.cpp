#include<stdio.h>
#include<math.h>
int sothuannghich(int a)
{
	int sum=0;
	while(a>0)
	{
		sum=sum*10+a%10;
		a/=10;
	}
	return sum;
}
int tongcschiahet(int a)
{
	int sum=0;
	while (a>0)
	{
		sum=sum+a%10;
		a/=10;
	}
	return sum;
}
int demcs(int a)
{
	int dem=0;
	while (a>0)
	{
		dem++;
		a/=10;
	}
	return dem;
}
int main() {
	int t,n;
	scanf("%d",&t);
	for (int i=1;i<=t;i++)
	{
		scanf("%d",&n);
		if (n==1 || n==2) printf("1\n");
		else
		{
			int m=pow(10,(n-3)/2);
			int k=pow(10,(n-4)/2);
			if(n%2==1) printf("%d\n",9*m);
			else printf("%d\n",18*k);
		}
	}
}
// cong thuc tren suy ra tu dap an n=3,5,7,9 thi dem=9,90,900,9000 va n=4,6,8 thi dem=18,180,1800
