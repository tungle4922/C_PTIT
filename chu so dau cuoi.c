#include <stdio.h>
#include <math.h>
int main() {
	int n;
	int a,dem=0;
	scanf("%d",&n);
	a=n%10;
	while(n>10)
	{
		n=n/10;
		dem++;
	}
	printf("%d %d",a,n);
}
