#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if (n<=1) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if (n%i==0) return 0;
	return 1;
}
int tongcs(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+n%10;
		n/=10;
	}
	return sum;
}
int main() {
	int n,dem=0;
	scanf("%d",&n);
	for (int i=2;i<n;i++)
	{
		if (snt(i) && tongcs(i)%5==0) 
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
