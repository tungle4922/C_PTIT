#include <stdio.h>
int main() {
	int n,a,b,i,sum=0;
	scanf("%d",&n);
	b=n;
	while (n>0)
	{
		int tich=1;
		a=n%10;
		for(i=1;i<=a;i++)
		{
			tich=tich*i;
		}
		sum=sum+tich;
		n=n/10;
	}
	if (sum==b) printf("1");
	else printf("0");
}
