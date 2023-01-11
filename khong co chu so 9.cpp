#include <stdio.h>
int sothuanngich(int n)
{
	int sum=0;
	while (n>0)
	{
		if (n%10==9) return 0;
		sum=sum*10+n%10;
		n=n/10;
	}
	return sum;
}
int main() {
	int n,dem=0;
	scanf("%d",&n);
	for (int i=2;i<n;i++)
	{
		if (sothuanngich(i)==i)
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
